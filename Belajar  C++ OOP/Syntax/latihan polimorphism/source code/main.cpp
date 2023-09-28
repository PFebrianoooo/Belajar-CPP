#include <iostream>
#include "task1.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Base *b = new Base;
    b->testfunction(); // print test function of base class
    delete b;

    Derived *d = new Derived;
    d->testfunction(); // print test function to derived class
    delete d;
    return 0;
}
