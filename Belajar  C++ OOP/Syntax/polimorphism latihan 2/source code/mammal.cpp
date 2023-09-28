#include "mammal.h"

Mammal::Mammal(void) : ItsAge(1)
{
    cout << "mammal constructor ...." << endl;
}

Mammal ::~Mammal(void)
{
    cout << "mammal destructor" << endl;
}

void Mammal::Move() const
{
    cout << "mammal moves on step" << endl;
}

void Mammal::Speak() const
{
    cout << "what does a mammal speak ? mammilian  !" << endl;
}
