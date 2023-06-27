#include <iostream>

using namespace std;

// prototype fungsi
int faktorial (int a);

main (){
	
	int f;
	
	cout << "masukkan nilai faktroial : " ; cin >> f;
	
	cout << endl << "hasil faktorial adalah : " << faktorial (f) << endl;
	
}

// fungsi - fungsi

// rcursive
int faktorial (int a){
	if (a <= 1){ // terminasi 
		cout << a ;
		return a;
	}else {
	cout << a << "*" ;
	return a * faktorial (a-1);
	}
}
