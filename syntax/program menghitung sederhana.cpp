#include <iostream>
using namespace std;

int a,b,c,d,e;
int hasil_d;
int hasil_e;

main (){
	cout << "================================" << endl;
	cout << "program menghitung sederhana" << endl;
	cout << "d = ++a * b + --c dan e = d-- / a*b " << endl;
	cout << "masukkan nilai a : " ; cin >> a ;
	cout << "masukkan nilai b : " ;cin >> b ;
	cout << "masukkan nilai c : " ;cin >> c ;
	cout << "masukkan nilai d : " ;cin >> d ;
	
	cout << "================================" << endl;
	
	hasil_d =(++a * b)+ --c;
	cout << "hasil perhitungan dari ++a x b + --c adalah : " << hasil_d << endl;
	
	
	hasil_e = d-- / a*b;
	cout << "hasil perhitungan dari d-- / a x b adalah : " << hasil_e << endl ;
}
