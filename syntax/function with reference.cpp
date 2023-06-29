#include <iostream>

using namespace std;


// ptototype
void fungsi (int &);
void kuadrat (int &); 


main (){
	int a = 10 ;
	
	cout << "adress darii a : " << &a << endl;
	cout << "nilai dari a : " << a << endl;
	
	//fungsi
	kuadrat (a);
	cout << "kuadrat dari a : " << a << endl;
	
	
	return  0;
}

// fungsi 

void fungsi (int &b){
	b = 10 ;
	cout << "alamat dari b : " << &b << endl;
	cout << "nilai dari b : " << b << endl;
}

void kuadrat (int &nilaiRef){
	nilaiRef = nilaiRef * nilaiRef;
}
