#include <iostream>
using namespace std;

int main (){
	
	// assignment standar 
	int a = 10;
	cout << "nilai awal dari a adalah : " << a << endl ;
	// asignment operator
	// variabel = variabel operator ekspressi
	// 		a   = 	 a          -          3
	// variabel operator ekspessi
	// a.        +=.        3
	
	a += 3 ;
	cout << "nilai a ditambah 3 adalah :" << a << endl;
	
	a -= 3;
	cout << "nilai a dikurangi 3 adalah :" << a << endl;
	
	a /= 3;
	cout << "nilai a dibagi 3 adalah : " << a << endl;
	
	a *= 3 ;
	cout << "nilaii a dikali 3 adalah : " << a << endl;
	
	a %= 3;
	cout << "nilai a dimodulus 3 adalah : " << a << endl;
	
	return 0;
}
