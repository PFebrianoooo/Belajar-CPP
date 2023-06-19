#include <iostream>
using namespace std;

main(){
	int r;
	float phi =3.14;
	float luas;
	int keliling;
	
	cout << "=======================" << endl ;
	cout << "menu mencari luas dan keliling lingkaran" << endl ;
	cout << "masukkan jari-jari : ";  cin >> r;
	cout << "=======================\n";

		
	luas = (phi * r * r);
	cout << "luas lingkarannya adalah : " << luas << endl;
	
	keliling = (2 * phi * r);
	cout << "keliling lingkarannya adalah : " << keliling << endl;
	
	return 0;
	
}
