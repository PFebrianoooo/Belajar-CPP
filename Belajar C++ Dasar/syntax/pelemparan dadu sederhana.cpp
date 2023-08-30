#include <iostream>
#include <cstdlib> // mengandung fungsi random

using namespace std;

int main(){
	
	while (true){
		
		char lanjut;
		cout << "lempar dadu (y/n) ? " ; cin >> lanjut;
		
		if (lanjut == 'y'){
			cout << 1 + (rand() % 6) << endl;
		}else  if (lanjut == 'n'){
			char lanjut2;
			cout << "yakin kak gamau main lagi ? (y/n) ? "; cin >> lanjut2 ;
			if (lanjut2 == 'y'){
				cout << "makaksih kaka ? " << endl;
			}else if (lanjut == 'n'){
				cout << "yaudah makasih";
				break;
			}else {
				cout << "masukkan y ataun dong kaka" << endl;
			}
		}else {
			cout << "masukkan y atau n dong kaka :D" << endl;
		}
	}
	return 0 ;
}




