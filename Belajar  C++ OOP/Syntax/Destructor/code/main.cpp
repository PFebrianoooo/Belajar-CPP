#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
    string Nama;

    // constructor
    Player(const char *nama)
    {
        Player::Nama = nama;
        cout << "player " << Player::Nama << " dibuat" << endl;
    }

    // destructor
    ~Player()
    {
        cout << "player " << Player::Nama << " dihapus" << endl;
    }
};

void MembuatPlayerStack()
{
    Player stackplayer = Player("stack");
}

void MembuatHeapPlayer()
{
    Player *heaplayer = new Player("heap");
    delete heaplayer;
}

main()
{
    MembuatPlayerStack();
    MembuatHeapPlayer();

    return 0;
}
