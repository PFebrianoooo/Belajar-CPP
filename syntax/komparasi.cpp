#include <iostream>
using namespace std;

int main (){
	int a = 2;
	int b = 2;
	bool hasil_1, hasil_2,hasil_3,hasil_4,hasil_5,hasil_6;
	
	// komparasi / membandingkan
	/* 0 artinya salah 
	   1 artinya betul
	*/
	
	// sebanding 
	hasil_1 = (a == b);
	cout << hasil_1 << endl;
	
	// ! tidak sebanding
	hasil_2 = (a != b);
	cout << hasil_2 << endl;
	
	// kurang dari
	hasil_3 = (a < b);
	cout << hasil_3 << endl;
	
	// lebih dari
	hasil_4 = (a > b);
	cout << hasil_3 << endl;
	
	// kurang dari sama dengan
	hasil_5 = (a <= b);
	cout << hasil_5 << endl;
	
	// lebih dari sama dengan
	hasil_6 = (a >= b);
	cout << hasil_6 << endl;
	
	return 0;
	
}
