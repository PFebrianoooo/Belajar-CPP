#include <iostream>
using namespace std;

main(){
	long i;
	long f_n,f_n1,f_n2;
	long n;
	
	cout << "Batas deret fibonacci s/d 40 saja" << endl;
	cout << "masukkan nilai ke- N : "; cin >> n;
	
	f_n1 = 1 ;
	f_n2 = 0 ;
	
	cout << f_n1 << " "; // perlakuan pertama
	do { 
	f_n = f_n1 + f_n2 ; // perlakuan loop setelahnya
	f_n2 = f_n1;
	f_n1 = f_n;
		cout << f_n1 << " ";
		i++;
	}while(i<n);
}
