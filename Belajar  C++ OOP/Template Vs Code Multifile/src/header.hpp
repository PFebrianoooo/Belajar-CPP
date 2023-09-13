#ifndef __PLAYER
#define __PLAYER

#include <iostream>

class Player
{
public:
    int Umur;
    float Nilai;

    // constructor
    Player(int Umur, float Nilai);

public:
    void Display();
};

#endif