#include <iostream>
#include <string>

#include "Mahasiswa.hpp"
using namespace std;

int main()
{
    Mahasiswa *mahasiswa1 = new Mahasiswa("nama");
    cout << mahasiswa1->NamePublic << endl; // karena public maka dapat di akses
    // cout << mahasiswa1->NamePrivate << endl; karena private tidak dapat diakses

    Mahasiswa *mahasiswa2 = new Mahasiswa("marissa");
    mahasiswa2->TampilDataPublic(); // dapat dilakukan karena fungsi berada di public
    // mahasiswa2->TampilDataPrivate // tidak dapat dilakuakn karena fungsi berada di private

    Mahasiswa *mahasiswa3 = new Mahasiswa("Bang Jalak");
    mahasiswa3->TampilDataPublic();

    return 0;
}
