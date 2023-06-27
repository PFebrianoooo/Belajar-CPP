#include <iostream>

using namespace std;

main (){
	int a = 5 ;
	
	// pointer 
	int *pntr = &a;
	
	
	// int a mempunyai nilai pointernya / alamatnya
	
	cout << "ini adalah nilai dari a : " << a << endl;
	cout << "ini alamat dari si a : " << &pntr << endl;
	
	// dereferencing
	cout << "mengambil nilai dari pointer apntr : " << *pntr << endl;
	
	return 0;
}
