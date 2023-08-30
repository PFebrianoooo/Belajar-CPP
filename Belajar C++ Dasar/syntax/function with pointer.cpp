#include <iostream>

using namespace std;

// prototype

void fungsi (int *);
void kuadrat (int *);


main (){
	int a = 5;
	cout << "adress a : " << &a << endl;
	cout << "nilai a: " << a << endl;
	
	// memanggil fungsi
	fungsi (&a); // fungsi dengan input pointer
	
	
	kuadrat (&a);
	
	cout << "nilai a : " << a << endl;
	
	
	
	
	return 0;
}

// fungsi-fungsi

void fungsi (int *b){
	cout << "adress b : " << b << endl;
	cout << "nilai b : " << *b << endl; // derefencing
}

void kuadrat (int *valptr){
	*valptr = *valptr *  *valptr;
}
