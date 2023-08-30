#include <iostream>


using namespace std;


// fungsi rekurisf terbatas
int pangkat_iterasi(int a , int b){
	int hasil = a;
	for (int i=1; i<b ; i ++){
		hasil = hasil * a;
	}
	return hasil;
}

// pangkat rekursif
int pangkat_rekursif (int a, int b){
	if (b <= 1){
		return a;
		cout << "akhir dari rekursif ";
	}else {
		return a * pangkat_rekursif (a, (b-1));
		cout << "rekursif";
	}
	
}

int main (){
	int a ;
	int b ;
	
	cout << "angka : "; cin >> a;
	cout << "pangkat : "; cin >> b;
	
	cout << "hasil dari iterasi : " << pangkat_iterasi(a,b) << endl;
	
	cout << "hasil dari pangkat rekursif : " << pangkat_rekursif(a,b) << endl;
	
	return 0;
}
