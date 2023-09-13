#include <iostream>
#include "header.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int Umur;
    float Nilai;

    cout << "masukkan umur : ";
    cin >> Umur;
    cout << "masukkan nilai : ";
    cin >> Nilai;

    Player Player1 = Player(Umur, Nilai);
    Player1.Display();

    return 0;
}
