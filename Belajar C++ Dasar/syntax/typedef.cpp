#include <iostream>


using namespace std;


main (){
    // typedef adalah alias untuk typedata

    typedef int I;
    typedef int IVector[2];
    typedef unsigned long ulong;
    typedef double IVector2D[2];


    // using adalah nama alias juga

    using Numbers = float;


    I a = 10 ;
    IVector b = {1,3};
    ulong i = 21868317371263271698738141;
    IVector2D d = {3.14212, 4.24121};
    Numbers e = 3.1231241;


    cout << a << endl;
    cout << "nilai b adalah : " << b[0] << " dan " << b[1] << endl;
    cout << "nilai i adalah : " << i << endl;
    cout << "nilai d adalah : " << b[0] << " dan " << b[1] << endl;
    cout << "nilai e adalah : " << e << endl;


}
