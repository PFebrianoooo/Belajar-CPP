// Online C++ compiler to run C++ program online
#include <iostream>

// external definition
#include "player.h"

using namespace std;

int main()
{
    Player *player1;
    player1 = new Player("Putra Pebriano Nurba");
    player1->Display();

    cout << "get name " << player1->name << endl;

    cout << "Merubah Nama" << endl;
    player1->SetName("Muhammad Fajri Al Ghifary");
    player1->Display();

    return 0;
}
