#include <iostream>

#define ID 2

#if ID ==1
    #define LANG "indonesia"
#else
    #define LANG "english"
#endif


using namespace std;

main (){

    cout << "bahasa : " << LANG << endl;
}
