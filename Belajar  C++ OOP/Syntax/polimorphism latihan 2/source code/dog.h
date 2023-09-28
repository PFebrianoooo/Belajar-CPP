#pragma once
#include <iostream>
#include "mammal.h"

using namespace std;
class Dog : public Mammal
{
public:
    Dog(void);
    ~Dog(void);

    void Move() const;
    void Speak() const;

protected:
    int ItsAge;
};