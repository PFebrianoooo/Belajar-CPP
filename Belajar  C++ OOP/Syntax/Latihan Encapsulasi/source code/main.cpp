/*/
encapssulasi antara 2 objek yang saling berinteraksi dengan getter and setter method
*/

#include <iostream>
#include <string>

using namespace std;

class Weapon
{
private:
    string Name;
    double Damage;

public:
    Weapon(const char *Name = "AUG", double Damage = 44)
    {
        this->Name = Name;
        this->Damage = Damage;
    }

    void Display()
    {
        cout << "Senjata yang di gunakan adalah " << this->Name << " Dengan damage sebesar " << this->Damage << " attack power" << endl;
    }

    // getter
    string GetName()
    {
        return this->Name;
    }

    double GetDamage()
    {
        return this->Damage;
    }
};

class Player
{
private:
    string Name;
    Weapon *weapon;
    int Health;

public:
    Player(const char *Name = "user1")
    {
        this->Name = Name;
        this->Health = 100;
    }

    void Display()
    {
        cout << "\nNama Player Anda Adalah = " << this->Name << endl;
        cout << "Menggunakan senjata " << this->weapon->GetName() << endl;
        this->weapon->Display();
    }

    // setter
    void EquipWeapon(Weapon *weapon)
    {
        this->weapon = weapon;
    }

    string GetName()
    {
        return this->Name;
    }

    void Attack(Player *player)
    {
        if (this->Health <= 0)
        {
            cout << this->Name << " sudah meninggal" << endl;
            cout << this->Name << " tidak dapat menyerang" << endl;
        }
        else
        {
            cout << endl
                 << this->Name << " menyerang " << player->GetName() << endl;
            Defence(this->weapon->GetDamage());
        }
    }

    void Defence(double damage)
    {
        this->Health -= damage;
        cout << this->Name << " mendapatkan damage sebesar " << damage << endl;

        if (this->Health <= 0)
        {
            cout << this->Name << " meninggal" << endl;
        }
    }
};

main()
{

    Player *player1 = new Player("ucup");
    Weapon *weapon1 = new Weapon("AK - 47 ", 50);
    player1->EquipWeapon(weapon1);
    player1->Display();

    cout << endl;

    Player *player2 = new Player("otong");
    Weapon *weapon2 = new Weapon("SPAS 12", 20);
    player2->EquipWeapon(weapon2);
    player2->Display();
    cout << endl;

    cout << "===== Mulai Bergelud =====" << endl;

    player1->Attack(player2);
    player2->Attack(player1);
     
    player1->Display();
    player2->Display();

    player1->Attack(player2);
    return 0;
}
