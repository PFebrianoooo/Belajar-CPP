#include <iostream>
using namespace std;

main (){
	// rumus f_n = F_n1 + f_n2
	
	int f_n,f_n1,f_n2;
	int n,i;
	cout << "program deret fibonacci" << endl;
	cout << "masukkan nilai ke - n : " ; cin >> n ;
	
	f_n1 = 1;
	f_n2 = 0;
	/*f_n = f_n1 + f_n2; // untuk ditampilkan tanpa ada nol didepan
	cout << f_n << endl;
	*/
	cout << f_n2 << " ";
	cout << f_n1 << " ";
	for (i=1; i<n ; i++){
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		
		cout << f_n << " " ;	
	}
	return 0;
}
