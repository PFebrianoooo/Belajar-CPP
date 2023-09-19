#include <iostream>
#include <string>

using namespace std;

class Hero
{
private:
    string Nama;
    double Health;

public:
    static int count;

    Hero(const char *name, double health)
    {
        this->Nama = name;
        this->Health = health;
        count++;
    }

    // destructor
    ~Hero()
    {
        cout << this->Nama << " sudah di delete guys" << endl;
    }

    void Display()
    {
        cout << Nama << endl;
        cout << "memiliki health sebesar " << Health << endl;
    }
};

int Hero::count = 0;

main()
{
    Hero hero1 = Hero("amat", 100);
    hero1.Display();
    cout << "objek ke - " << hero1.count << " dengan total objek sebanyak " << hero1.count << endl;

    cout << endl;
    Hero hero2 = Hero("jordi", 90);
    hero2.Display();
    cout << "objek ke - " << hero2.count << " dengan total objek sebanyak " << hero2.count << endl;

    cout << endl;
    Hero *hero3 = new Hero("maas", 70);
    hero3->Display();
    cout << "objek ke - " << hero3->count << " dengan total objek sebanyak " << hero3->count << endl;

    cout << endl;
    Hero *hero4 = new Hero("mees", 80);
    hero4->Display();
    cout << "objek ke - " << hero4->count << " dengan total objek sebanyak " << hero4->count << endl;

    cout << endl;
    // menghaous obek di memory
    delete hero3;
    delete hero4;

    return 0;
}
