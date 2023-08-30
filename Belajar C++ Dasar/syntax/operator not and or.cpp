#include <iostream>
using namespace std;

int main (){
	int a = 3;
	int b = 2;
	
	bool hasil ;
	
	// operator not and or
	
	// not menegasikan  atu melawan
	cout << "untuk not" << endl ;
	hasil = !(a == 3);
	cout << hasil << endl;
	cout << "===================="<< endl ;
	
	// and kedua nilai harus benar untuk hasilkan true
	
	cout << "untuk and" << endl ;
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 3); // false and false
	cout << hasil << endl;
	
	// or salah satu nilai true maka hasilnya true
	
	cout << "====================" << endl;
	cout << "untuk or" << endl;
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) or (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) || (b == 3); // false and false
	cout << hasil << endl;
	
	return 0;
}
