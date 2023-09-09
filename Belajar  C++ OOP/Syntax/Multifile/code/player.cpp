#include "player.h"
#include <iostream>
#include <string>

// PROTOTYPE FUNGSI
void Player::Display()
{
    std::cout << "Nama Player adalah " << this->name << std::endl;
}

Player::Player(const char *name)
{
    this->name = name;
}
std::string Player::GetName()
{
    return this->name;
}
void Player::SetName(const char *name)
{
    this->name = name;
}