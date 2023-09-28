#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string NamaDepan;
    string NamaTengah;
    string NamaBelakang;

public:
    Player()
    {
        NamaDepan = "depan";         // secara implisit
        this->NamaTengah = "tengah"; // dengan menggunakan this dan arrow
        // player::NamaTengah = "tengah" // dengan menggunakan referencing kelas
        (*this).NamaBelakang = "belakang"; // dengan menggunakan this berpointer dan comma operator
    }

    // cascading function calls dengan me-return pointer this

    Player &SetNamaDepan(const char *Depan)
    {
        this->NamaDepan = Depan;
        return *this;
    }
    Player &SetNamaTengah(const char *Tengah)
    {
        this->NamaTengah = Tengah;
        return *this;
    }
    Player &SetNamaBelakang(const char *Belakang)
    {
        this->NamaBelakang = Belakang;
        return *this;
    }

    void Display()
    {
        cout << "nama :";
        cout << " " << NamaDepan;          // secara implisit
        cout << " " << Player::NamaTengah; // secara eksplisit
        // cout << this->NamaBelakang; // engan menggunakan this dan arrow
        cout << " " << (*this).NamaBelakang; // dengan emnggunakan this berpointer dan comma operator
        cout << endl;
    }
};

int main(int argc, char const *argv[])
{

    Player player1 = Player();
    player1.Display();

    // tidak menggunakan cascading function calls

    player1.SetNamaDepan("ucup");
    player1.SetNamaTengah("madhari");
    player1.SetNamaBelakang("putra");

    player1.Display();

    // dengam menggunakan cascading function calls
    player1.SetNamaDepan("otong").SetNamaTengah("gascoigne").SetNamaBelakang("ilarramendi");
    player1.Display();
    return 0;
}
