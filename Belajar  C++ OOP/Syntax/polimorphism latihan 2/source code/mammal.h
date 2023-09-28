#ifndef __MAMMAL
#define __MAMMAL
#include <iostream>

using std::cout;
using std::endl;

class Mammal
{
public:
    Mammal(void);
    ~Mammal(void);

    void Move() const;
    void Speak() const;

protected:
    int ItsAge;
};

#endif