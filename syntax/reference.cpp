#include <iostream>

using namespace std;

int main (){
	
	// variable
	
	int a = 1;
	
	cout << "adress dari a adalah : " << &a << endl;
	cout << "nilai dari a adalah : " << a << endl;
	
	// reference 
	int &b = a;
	
	cout << "nilai dari b adalah : " << b << endl;
	cout << "adress dari b adalah : " << &b << endl << endl;
	
	b = 10;
	
	cout << "nilai dari a : " << a << endl;
	cout << "nilai dari b : " << b << endl << endl;
	
	a = 20;
	
	cout << "nilai dari a : " << a << endl;
	cout << "nilai dari b : " << b << endl;
	
	
	return 0;
}
