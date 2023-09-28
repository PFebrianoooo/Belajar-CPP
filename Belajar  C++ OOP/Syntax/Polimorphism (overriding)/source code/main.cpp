#include <iostream>

using namespace std;

class Base
{
public:
    void Display()
    {
        cout << "ini adalah kelas di Base Class" << endl;
    }
};

class Derived : public Base
{
public:
    void Display()
    {
        cout << "ini adalah kelas di derived" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base b;

    Derived d;
    d.Display();
    b.Display();

    return 0;
}
