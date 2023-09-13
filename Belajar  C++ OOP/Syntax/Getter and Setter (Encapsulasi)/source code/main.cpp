#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    double attackpower;
    int level;
    int exp;

public:
    Player(const char *name)
    {
        this->name = name;
        this->level = 1;
        this->exp = 0;
        this->attackpower = 100;
    }

    // getter hanya dapat read only data saja
    string GetNama()
    {
        return this->name;
    }

    // setter
    // melakukan operasi di belakang layar tanpa mengubah si nilai secara langsung
    void addExperience(int exp)
    {
        int maxExp = 100;
        this->exp += exp;
        cout << "Exp bertambah = " << this->exp << endl;
        if (this->exp >= maxExp)
        {
            cout << "========= level up !! =========" << endl;
            this->level++;
            this->attackpower += 100;
            this->exp = 0;
        }
    }

    void Display()
    {
        cout << "Name\t" << this->name << endl;
        cout << "level : " << this->level << " exp : " << this->exp << endl;
        cout << "attack power : " << this->attackpower << endl
             << endl;
    }
};

int main()
{
    Player player1 = Player("Naruto");
    player1.Display();

    // implementasi getter
    cout << player1.GetNama() << endl
         << endl; // hanya bisa read data
    // player1.name = "nandar";

    cout << "Bertarung" << endl;
    player1.addExperience(20); // setter
    player1.addExperience(10);
    player1.addExperience(25);
    player1.addExperience(30);
    player1.addExperience(20);
    cout << endl;

    player1.Display();

    cout << "Bertarung" << endl;
    player1.addExperience(20); // setter
    player1.addExperience(10);
    player1.addExperience(25);
    player1.addExperience(30);
    player1.addExperience(20);
    cout << endl;

    player1.Display();

    return 0;
}
