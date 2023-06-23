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
		for (k = n; k >= (2*i)-n ; k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 4" << endl;
	
	for (i=1 ; i<=n ; i++){
		for (j=n ; j > i; j--){
			cout << " ";
		}
		for (k = 1; k <=(2*i -1 ); k++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "pola 5" << endl;
	
		for (i=1 ; i<=n ; i++){
		for (j=n ; j > i; j--){
			cout << " ";
		}
		for (k = 1; k <=(2*i -1 ); k++){
			cout << "*";
		}
		cout << endl;
	}
	for (i=2 ; i<=n ; i++){
		for (j=1 ; j<i; j++){
			cout << " ";
		}
		for (k = n; k >= (2*i)-n ; k--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	return 0;
}
