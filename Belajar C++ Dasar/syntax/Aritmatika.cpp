#include <iostream>
using namespace std;

int main (){
	int a = 6;
	float b = 4;
	int c = 5;
	
	float hasil;
	// operatornya (+ , - , * , / , % )
	
	// penjumlahan
	cout << "hasil penjumlahan : " << a+b << endl;
	
	// pengurangan 
	cout << "hasil pengruangan : " << a-b << endl;
	
	// perkalian 
	cout << "hasil perkalian : " << a*b << endl;
	
	// pembagian
	hasil = a/b;
	cout << "hasil pembagian : " << hasil << endl;
	
	// modulus
	//cout << "hasil modulus : " << a%b << endl;
	
	// ututan eksekusi
	hasil = (a+b)*c;
	cout << "hasil (a+b)*c : " << hasil << endl;
	
	return 0;
}
