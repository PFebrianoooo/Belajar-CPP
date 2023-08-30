#include <iostream>

using namespace std;

// prototype
int luas_kotak (int p , int l);
int luas_kotak (int sisi);
double luas_kotak (double sisi);



main (){
	
	cout << "luas kotak 2x3 : " << luas_kotak (2,3) << endl;
	cout << "luas kotak 2x2 : " << luas_kotak (2) << endl;
	cout << "luas kotak 2.5 x 2.5 : " << luas_kotak (2.5) << endl;
}


// function basic
int luas_kotak (int p , int l){
	int luas = p * l;
	return luas ;
}

// overload function
int luas_kotak (int sisi){
	int luas = sisi * sisi ;
	return luas;
}

double luas_kotak (double sisi){
	return sisi * sisi;
}
