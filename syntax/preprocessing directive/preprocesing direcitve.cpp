// preprocesing directive starts
#include <iostream>

// macro merubah nilai dengan nama
#define PI 3.14159265
#define BAHASA "indonesia"

// macro untuk fungsi
#define KUADRAT(X) (X*X)
#define MAX(A,B) ((A > B)? A:B)

// preprocesing directive ends


using namespace std;

main (){
    cout << "nilai pi : " << PI << endl;
    cout << BAHASA << endl;

    cout << "kuadrat : " << KUADRAT (5) << endl;
    cout << "max : " << MAX(5,10) << endl;

    #undef BAHASA
    #define BAHASA "inggris"
    cout << BAHASA << endl;

return 0 ;
}
