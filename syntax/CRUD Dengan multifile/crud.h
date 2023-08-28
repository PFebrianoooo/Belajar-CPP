#include <fstream>
#include <string>


namespace crud {
struct Mahasiswa
{
    int pk;
    std::string nim;
    std::string nama;
    std::string jurusan;
};

int getoptions();
void check_database(std::fstream &data);
void writedata(std::fstream &data, int posisi, Mahasiswa &inputmahasiswa);
int getdatasize(std::fstream &data);
Mahasiswa readdata(std::fstream &data, int posisi);
void adddatamahasiswa(std::fstream &data);
void displaydatamahasiswa(std::fstream &data);
void updaterecord(std::fstream &data);
void deleterecord(std::fstream &data);

}
