#include <iostream>

using namespace std;


// prototype
double hitung_luas (double p , double l);
void print1 (double x);


main (){
	
	double panjang , lebar , luas ;
	cout << "program mencari luas dan keliling persegi panjang !" << endl;
	cout << "masukkan panjang : " ; cin >> panjang;
	cout << "masukkan lebar : " ; cin >> lebar;
	
	luas = hitung_luas (panjang , lebar);
	
	print1 (luas);
}

double hitung_luas (double p, double l){
	return p * l;
}

void print1 (double x){
	cout << "hasilnya adalah : " << x << endl;
}

