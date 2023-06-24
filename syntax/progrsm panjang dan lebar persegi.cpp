#include <iostream>

using namespace std;

int hitung_luas (int x , int y){
	int hasil1;
	hasil1 = x * y;
	return hasil1;
}

int hitung_keliling (int x, int y){
	int hasil2 ;
	hasil2 = 2* (x+y);
	return hasil2;
}


void luas (int x , int y){
	cout << "luasnya adalah" << endl;
	cout << hitung_luas(x,y) << endl;
}

void keliling (int x, int y){
	cout << "kelilingnya adalah" << endl;
	cout << hitung_keliling(x,y) << endl;
}


main (){
	cout << "program mencari luas dan keliling persegi panjang " << endl;
	
	int a ;
	int b ;
	
	cout << "masukkan panjang : " ; cin >> a;
	cout << "masukkan lebar : " ; cin >> b;
	
	luas (a,b);
	keliling (a,b);
	
}
