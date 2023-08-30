#include <iostream>
#include <array>

using namespace std;

main (){
// looping untuk array c++ 11 keatas

int nilai [10] = {1,2,3,4,5,6,7,8,9,10}; // arraynya

for (int i : nilai){ // looping array
cout << "nilainya : " << i << endl;
}

cout << endl;

for (int &iRef : nilai) { // nilai yang sudah dirubah
    iRef *= 2;
    cout << "nilai yang sudah dirubah : " << iRef << endl;
}
}
