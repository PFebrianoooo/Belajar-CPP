#include "Mahasiswa.hpp"

#include <iostream>
#include <string>

Mahasiswa::Mahasiswa(const char *Name)
{
    this->NamePublic = Name;
    this->NamePrivate = Name;
}

void Mahasiswa::TampilDataPublic()
{
    std::cout << "Nama Mahasiswa : " << this->NamePrivate << std::endl;
}

void Mahasiswa::TampilDataPrivate()
{
    std::cout << "Nama Mahasiswa : " << this->NamePrivate << std::endl;
}