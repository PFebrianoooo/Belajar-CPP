#include <iostream>
using namespace std;

float a,b,hasil;
char aritmatika;

int main(){
	
	cout << "selamat datang di kalkulator"<< endl;
	cout << "============================"<< endl;
		
		cout << "masukkan nilai pertama = ";
		cin >> a;
		cout << "pilih operator +,-,*,/ = ";
		cin >> aritmatika;
		cout << "masukkan nilai kedua = ";
		cin >> b;
		
		cout << "hasil perhitungan ";
		cout << a << aritmatika << b << endl;
		
		if (aritmatika == '+'){
			hasil = a+b;
			cout << hasil << endl;
		}else if (aritmatika == '-'){
			hasil = a-b;
			cout << hasil << endl;
		}else if (aritmatika == '*'){
			hasil = a*b;
			cout << hasil << endl;
		}else if (aritmatika == '/'){
			hasil = a/b;
			cout << hasil << endl;
		}else {
			cout << "operator anda salah" << endl;
		}
		
		cout << "terimakasih telah menggunakan layanan kami";
	return 0;
}
