#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa
{
    // attributes atau data member
public:
    std::string NamePublic; // ini dapat diakses oleh idapapun. termasuk yang diluar kelas

private:
    std::string NamePrivate; // hanya dapat diakses oleh kelas itu sendiri

    // method atau member function
public:
    // constructor selalu public
    Mahasiswa(const char *Name);
    void TampilDataPublic();

private:
    void TampilDataPrivate();
};
#endif