#include <iostream>


using namespace std;


int kuadrat (int x){
	int y;
	y = x * x;
	return y;
}

int kurang (int y, int z){
	int x ; 
	x = y-z;
	return x;
}

main(){
	
	int a;
	int b;
	cout << "masukkan nilai x = " ; cin >> b;
	
	a = kuadrat (b);
	cout << a << endl;;
	
	
	int c ;
	int d ;
	int e ;
	
	cout << "masukkan angka pertama : " ; cin >> c;
	cout << "masukkan angka kedua : "; cin >> d;
	
	e = kurang (c,d);
	cout << e ;
	
}
