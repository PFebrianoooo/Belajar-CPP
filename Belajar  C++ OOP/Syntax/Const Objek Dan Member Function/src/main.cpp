#include <iostream>
#include <string>
using namespace std;

class Player
{

private:
    string Nama;

public:
    Player(const char *Nama)
    {
        this->Nama = Nama;
    }

    // setter
    void ChangeNama(const char *Nama)
    {
        this->Nama = Nama;
    }

    // getter
    string GetNama() const
    {
        return this->Nama;
    }

    // // ini tidak boleh
    // void ChangeNama(const char * Nama) const {
    //     this->Nama = Nama;
    // }

    void Display() const
    {
        cout << "Nama Player adalah " << this->Nama << endl;
    }
};

int main(int argc, char const *argv[])
{
    Player player1 = Player("jamal");
    player1.Display();

    // player1.Nama = "badarawudiiii"; // ini bisaa

    // setelah di change nama
    player1.ChangeNama("Badarawuhi"); // ini bisaa
    player1.Display();

    const Player player2 = Player("Banteng_Betawi");
    player2.Display();
    // player2.nama = "jamaludiin"; // ini tidak bisa
    //  player2.ChangeNama("banteng_merah"); // tidak dapat change nama
    player2.Display();
    cout << player2.GetNama() << endl;
    cout << player1.GetNama() << endl;

    // kesimpulan
    /*
    1. Bahwa objek yang const akan bisa di panggil melalui fungsi const juga
    2. bahwa apabila objek tidak const . maka seluruh memberfunction/method akan bisa di panggil
    */
    return 0;
}
