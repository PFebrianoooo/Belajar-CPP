#include <iostream>
#include <string>

using namespace std;

class IntelHero;

class StreghtHero
{
private:
    string Name;
    double Health;

public:
    StreghtHero(const char *name)
    {
        this->Name = name;
        this->Health = 100;
    }

    string GetName()
    {
        return Name;
    }

    void DisplayData()
    {
        cout << "Get Ready" << endl;
        cout << GetName() << endl;
        cout << "player bernama " << this->Name << " memiliki health sebesar " << this->Health << endl;
    }

    friend bool compare(const StreghtHero &hero1, const IntelHero &hero2);
    friend bool compare(const IntelHero &hero1, const StreghtHero &hero2);
};

class IntelHero
{
private:
    string Name;
    double Health;

public:
    IntelHero(const char *name)
    {
        this->Name = name;
        this->Health = 50;
    }

    string GetName()
    {
        return Name;
    }

    void DisplayData()
    {
        cout << "Get Ready" << endl;
        cout << GetName() << endl;
        cout << "player bernama " << this->Name << " memiliki health sebesar " << this->Health << endl;
    }

    // deklarasi inside the class
    friend bool compare(const StreghtHero &hero1, const IntelHero &hero2)
    {
        cout << "fungsi compare global scope " << endl;
        return hero1.Health > hero2.Health;
    };
    friend bool compare(const IntelHero &hero1, const StreghtHero &hero2);
};

// deklarasi outside the class
bool compare(const IntelHero &hero1, const StreghtHero &hero2)
{
    cout << "fungsi compare global scope" << endl;
    return hero1.Health > hero2.Health;
};

int main(int argc, char const *argv[])
{
    StreghtHero hero1 = StreghtHero("mamat_alkatiri");
    IntelHero hero2 = IntelHero("rigel");

    hero1.DisplayData();
    cout << endl;
    hero2.DisplayData();
    cout << endl;

    compare(hero1, hero2);
    cout << endl;
    compare(hero2, hero1);

    return 0;
}