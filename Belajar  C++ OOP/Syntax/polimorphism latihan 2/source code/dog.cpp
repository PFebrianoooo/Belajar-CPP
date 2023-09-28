#include "dog.h"

Dog::Dog(void) : ItsAge(1)
{
    cout << "dog constructor" << endl;
}

Dog::~Dog(void)
{
    cout << "Dog Destructor" << endl;
}

void Dog::Move() const
{
    cout << "Dog moves on step" << endl;
}

void Dog::Speak() const
{
    cout << "what does Dog speak ? DOggyy !" << endl;
}