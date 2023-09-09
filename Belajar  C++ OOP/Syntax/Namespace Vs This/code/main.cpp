#include <iostream>
#include <string>

using namespace std;

class ClassType
{
public:
    string Datastr;
    double Datadouble;
    double m_datadouble;

    ClassType(const char *Datastr, double Datadouble)
    {
        // dengan menggunakan namespace dari class
        ClassType::Datastr = Datastr;

        // dengan menggnakan "this"
        // this sama dengan namespace refers to nameapace
        this->Datadouble = Datadouble;

        // denhgan menggunakan konvensi penamaan
        m_datadouble = Datadouble;
    }

    void TampilData()
    {
        cout << this->Datastr << endl;
        cout << this->Datadouble << endl;
        cout << this->m_datadouble << endl;
    }
};

namespace otong
{
    class Player
    {
    public:
        string nama;
        double nilai;
        int health;

        Player(const char *nama, double nilai)
        {
            this->SetNama(nama);
            Player::SetNIlai(nilai);
        }

        void SetNama(const char *nama)
        {
            this->nama = nama;
        }

        void SetNIlai(double nilai)
        {
            this->nilai = nilai;
        }

        void TampilData()
        {
            cout << "nama Pemainnya adalah " << this->nama << endl;
            cout << "nilai pemainnya adlah " << this->nilai << endl;
            cout << "health pemainnya adalah " << this->health << endl;
        }

        void SetHealth(int);
    };
}

void otong::Player::SetHealth(int health)
{
    this->health = health;
}

main()
{
    ClassType *object1 = new ClassType("otong", 3.14);
    object1->TampilData();
    cout << endl;

    otong::Player *player1 = new otong::Player("jamal", 98.00);
    player1->TampilData();

    cout << "\nsetelah di set health nya\n"
         << endl;
    player1->SetHealth(100);
    player1->SetNama("ucup");
    player1->TampilData();

    return 0;
}

// bahwa namespace digunakan untuk diluar class terseut untuk merefers ke  class sedangkan this digunakan didalam fungsi atau kelas tersebut untuk merefers class