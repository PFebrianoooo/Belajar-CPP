#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <crud.h>


int main()
{

    std::fstream data;
    // mengecek database ada atu tidak ada
    crud::check_database(data);


    // menu starts
    char is_continue;
    int useroptions = crud::getoptions();

    enum options
    {
        Tambah = 1,
        Tampil,
        Ubah,
        Hapus,
        Finish
    };

    while (useroptions != Finish)
    {

        switch (useroptions)
        {
        case Tambah:
            std::cout << "Tambah Data mahasiswa" << std::endl;
            crud::adddatamahasiswa(data);
            break;
        case Tampil:
            std::cout << "Tampilkan Data Mahasiswa" << std::endl;
            crud::displaydatamahasiswa(data);
            break;
        case Ubah:
            std::cout << "Ubah Data Mahasiswa" << std::endl;
            crud::displaydatamahasiswa(data);
            crud::updaterecord(data);
            crud::displaydatamahasiswa(data);
            break;
        case Hapus:
            std::cout << "Hapus Data Mahasiswa" << std::endl;
            crud::displaydatamahasiswa(data);
            crud::deleterecord(data);
            crud::displaydatamahasiswa(data);
            break;
        default:
            std::cout << "maaf menu tidak ada !!!!" << std::endl;
        }

    label_continue:

        std::cout << "\nlanjutkan (y/n) : ";
        std::cin >> is_continue;
        if ((is_continue == 'y') | (is_continue == 'Y'))
        {
            useroptions = getoptions();
        }
        else if ((is_continue == 'n') | (is_continue == 'N'))
        {
            break;
        }
        else
        {
            goto label_continue;
        }
        // menu ends
    }
}
