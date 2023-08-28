#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#include <crud.h>

int crud::getoptions()
{
    int input;
    system("cls");
    std::cout << "=========== Program CRUD Data Mahasiswa ===========" << std::endl;
    std::cout << "===================================================" << std::endl;
    std::cout << "1. Tambah data Mahasiswa" << std::endl;
    std::cout << "2. Tampilkan data Mahasiswa" << std::endl;
    std::cout << "3. Ubah data Mahasiswa" << std::endl;
    std::cout << "4. Hapus data Mahasiswa" << std::endl;
    std::cout << "5. Selesai" << std::endl;
    std::cout << "===================================================" << std::endl;

    std::cout << "silahkan pilih menu : ";
    std::cin >> input;
    std::cout << std::endl;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return input;
}

void crud::check_database(std::fstream &data)
{
    data.open("data.bin", std::ios::in | std::ios::out | std::ios::binary);

    // check file ada atau tidak

    if (data.is_open())
    {
        std::cout << "Data ditemukan !!!!" << std::endl;
    }
    else
    {
        std::cout << "data tidak ada, buat database baru !!!! " << std::endl;
        data.close();
        data.open("data.bin", std::ios::in | std::ios::out | std::ios::binary | std::ios::trunc);
    }
}

void crud::writedata(std::fstream &data, int posisi, Mahasiswa &inputmahasiswa)
{
    data.seekp((posisi - 1) * sizeof(Mahasiswa), std::ios::beg);
    data.write(reinterpret_cast<char *>(&inputmahasiswa), sizeof(Mahasiswa));
}

int crud::getdatasize(std::fstream &data)
{
    int memulai, mengakhiri;

    data.seekg(0, std::ios::beg);
    memulai = data.tellg();
    data.seekg(0, std::ios::end);
    mengakhiri = data.tellg();

    return (mengakhiri - memulai) / sizeof(Mahasiswa);
}

crud::Mahasiswa crud::readdata(std::fstream &data, int posisi)
{
    crud::Mahasiswa readmahasiswa;

    data.seekg((posisi - 1) * sizeof(Mahasiswa), std::ios::beg);
    data.read(reinterpret_cast<char *>(&readmahasiswa), sizeof(Mahasiswa));

    return readmahasiswa;
}

void crud::adddatamahasiswa(std::fstream &data)
{

    crud::Mahasiswa inputmahasiswa, lastmahasiswa;

    int ukuranData = crud::check_database(data);

    std::cout << "ukuran data : " << ukuranData << std::endl;

    if (ukuranData == 0)
    {
        inputmahasiswa.pk = 1;
    }
    else
    {
        lastmahasiswa = crud::readdata(data, ukuranData);
        std::cout << "pk : " << lastmahasiswa.pk << std::endl;

        inputmahasiswa.pk = lastmahasiswa.pk + 1;
    }

    std::cout << "Nama : ";
    getline(std::cin, inputmahasiswa.nama);
    std::cout << "Jurusan : ";
    getline(std::cin, inputmahasiswa.jurusan);
    std::cout << "Nim : ";
    getline(std::cin, inputmahasiswa.nim);

    crud::writedata(data, ukuranData + 1, inputmahasiswa);
}

void crud::displaydatamahasiswa(std::fstream &data)
{
    int ukuran = crud::getdatasize(data);
    crud::Mahasiswa showmahasiswa;

    std::cout << "No.\tPk.\tNim.\tNama.\tJurusan." << std::endl;

    for (int i = 1; i <= ukuran; i++)
    {
        showmahasiswa = readdata(data, i);
        std::cout << i << "\t";
        std::cout << showmahasiswa.pk << "\t";
        std::cout << showmahasiswa.nim << "\t";
        std::cout << showmahasiswa.nama << "\t";
        std::cout << showmahasiswa.jurusan << endl;
    }
}

void crud::updaterecord(std::fstream &data)
{
    int nomor;
    crud::Mahasiswa updatemahasiswa;

    std::cout << "pilih No : ";
    std::cin >> nomor;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    updatemahasiswa = crud::readdata(data, nomor);

    std::cout << "\n\npilihan data : " << std::endl;
    std::cout << updatemahasiswa.nim << std::endl;
    std::cout << updatemahasiswa.nama << std::endl;
    std::cout << updatemahasiswa.jurusan << std::endl;

    std::cout << "\nmerubah data" << std::endl;
    std::cout << "Nim : ";
    getline(std::cin, updatemahasiswa.nim);
    std::cout << "nama : ";
    getline(std::cin, updatemahasiswa.nama);
    std::cout << "jurusan : ";
    getline(std::cin, updatemahasiswa.jurusan);

    crud::writedata(data, nomor, updatemahasiswa);
}

void crud::deleterecord(std::fstream &data)
{

    int nomor, ukuran, offset;
    crud::Mahasiswa blankmahasiswa, temporarymahasiswa;
    std::fstream datasementara;

    ukuran = crud::getdatasize(data);

    // 1. pilih nomor
    std::cout << "hapus nomor : ";
    std::cin >> nomor;
    // 2. di posisi ini diisi dengan data kosong
    crud::writedata(data, nomor, blankmahasiswa);
    // 3. kita cek data yang ada di file data.bin kalo ada dipindahkan ke file sementara
    datasementara.open("temp.dat", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);

    offset = 0;
    for (int i = 1; i <= ukuran; i++)
    {
        temporarymahasiswa = crud::readdata(data, i);

        if (!temporarymahasiswa.nama.empty())
        {
            crud::writedata(datasementara, i - offset, temporarymahasiswa);
        }
        else
        {
            offset++;
            std::cout << "deleted data " << std::endl;
        }
    }
    // 4. kita pindahkan data file sementara ke data.bin

    ukuran = crud::getdatasize(datasementara);
    data.close();

    data.open("data.bin", std::ios::trunc | std::ios::binary | std::ios::out);
    data.close();
    data.open("data.bin", std::ios::out | std::ios::in | std::ios::binary);

    for (int i = 1; i <= ukuran; i++)
    {
        temporarymahasiswa = crud::readdata(datasementara, i);
        crud::writedata(data, i, temporarymahasiswa);
    }
}
