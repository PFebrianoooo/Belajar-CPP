#include "header.hpp"
#include <iostream>

Player::Player(int Umur, float Nilai)
{
    this->Umur = Umur;
    this->Nilai = Nilai;
}

void Player::Display()
{
    std::cout << this->Umur << std::endl;
    std::cout << this->Nilai << std::endl;
}