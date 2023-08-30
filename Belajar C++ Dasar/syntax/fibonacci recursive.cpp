#include <iostream>

using namespace std;

// prototype
int fibonacci (int n);

main (){
	
	int a;
	
	cout << "masukkan deret yang diinginkan : "; cin >> a;
	cout << "nilai ke -n adalah : "<< fibonacci (a);
	
	
}

// fungsi - fungsi
int fibonacci (int n){
	if ((n==0)||(n==1)){
	return n;	
	}else {
		return fibonacci (n-1) + fibonacci (n-2);
	}
}
