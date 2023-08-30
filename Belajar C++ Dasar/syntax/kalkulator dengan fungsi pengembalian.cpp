#include <iostream>

using namespace std;

int tambah (int a, int b){
	int hasil;
	hasil = a + b;
	return hasil;
}

int kurang (int c , int d){
	int hasil;
	hasil = c - d;
	return hasil;
}

int kali (int e , int f){
	int hasil ;
	hasil = e * f;
	return hasil;
}

int bagi (int g , float h){
	int hasil ;
	hasil = g / h;
	return hasil;
}

main (){
	
	cout << "menu kalkulator angka" << endl;
	cout << "=========================" << endl;
	cout << endl;
	

		
		int menu;
		
		cout << endl << "[1] pertambahan" << endl;
		cout << "[2] pengurangan" << endl;
		cout << "[3] perkalian" << endl;
		cout << "[4] pembagian" << endl;
		cout << "[5] exit" << endl;
		
	while (true){	
	
		cout << endl << "masukkan menu yang dipilih : " ;cin >> menu;
			
		switch (menu){
			case 1 : {
				int i;
				int j;
				int hasil1;
				cout << "masukkan angka pertama : " ; cin >> i;
				cout << "masukkan angka kedua : " ; cin >> j;
				
				hasil1 = tambah (i,j);
				cout << hasil1 << endl;
				cout << endl;
				cout << endl;
				break;
			}
				case 2 : {
				int k;
				int l;
				int hasil2;
				cout << "masukkan angka pertama : " ; cin >> k;
				cout << "masukkan angka kedua : " ; cin >> l;
				
				hasil2 = kurang (k,l);
				cout << hasil2 << endl;
				cout << endl;
				cout << endl;
				break;
			}
				case 3 : {
				int m;
				int n;
				int hasil3;
				cout << "masukkan angka pertama : " ; cin >> m;
				cout << "masukkan angka kedua : " ; cin >> n;
				
				hasil3 = kali (m,n);
				cout << hasil3 << endl;
				cout << endl;
				cout << endl;
				break;
			}
				case 4 : {
				int o;
				float p;
				int hasil4;
				cout << "masukkan angka pertama : " ; cin >> o;
				cout << "masukkan angka kedua : " ; cin >> p;
				
				hasil4 = bagi (o,p);
				cout << hasil4 << endl;
				cout << endl;
				cout << endl;
				break;
			}
			case 5 :{
				cout << "terimakasih telah menggunakan";
				cout << endl;
				break;
			}
			default :
				cout << "menu tidak tersedia";
		}
		
	}
}
