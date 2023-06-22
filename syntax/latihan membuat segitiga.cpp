#include <iostream>
using namespace std;

main (){
	
	int i,k,j,n;
	cout << "masukkan panjang pola : "; cin >> n;
	cout << "pola 3" << endl;
	
	for (i=1 ; i<=n ; i++){
		for (j=1 ; j<i; j++){
			cout << " ";
		}
		for (k = n; k >= i ; k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 4" << endl;
	
	for (i=1 ; i<=n ; i++){
		for (j=n ; j > i; j--){
			cout << " ";
		}
		for (k = 1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
