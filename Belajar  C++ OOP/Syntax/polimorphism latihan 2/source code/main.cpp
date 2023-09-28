#include "mammal.h"
#include "dog.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Mammal *pDog = new Dog; // ngambil constructor doang
    pDog->Move();
    pDog->Speak();
    delete pDog ;

    cout << endl;

    Dog *pDog2 = new Dog ();
    pDog2->Move();
    pDog2->Speak();
    delete pDog2;
    return 0;
}
