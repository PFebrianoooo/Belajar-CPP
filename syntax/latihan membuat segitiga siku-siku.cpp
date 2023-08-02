#include <iostream>
using namespace std;

int main(){
	int n ;
	int i ;
	int j ;
	int k ;
	cout << "masukkan panjang pola : " ; cin >> n;
	cout << "pola 1" << endl;
	for (i=1; i <= n; i++){
		for (j=1; j<=i ; j++){
			cout << "*"  << " ";
		}
		cout << endl;
	}

	cout << endl << "pola 2" << endl;

	for (j=1; j<=n ; j++){
		for (i=j; i<=n ; i++){
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
