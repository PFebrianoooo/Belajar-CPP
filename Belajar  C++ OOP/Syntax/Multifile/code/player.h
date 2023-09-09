#ifndef __PLAYER
#define __PLAYER
#endif

#include <string>

class Player
{
public:
    std::string name;

    // comstructor
    Player(const char *name);
    void Display();
    std::string GetName();
    void SetName(const char *name);
};
