#include <iostream>
using namespace std;
int main (){
	int i;
	
	for (i = 1; i<=10; i++ ){
		cout << i << endl ;
	}
	
	cout << "======================================" << endl;
	
	for (i=1 ; i<=10 ; i+=2){
		cout << i << endl; 
	}
	
	cout << "======================================" << endl;
	
	for (i=1 ; i>=10 ; i--){
		cout << i << endl; 
	}
	
	cout << "======================================" << endl;
	int total = 0 ;
	for (i=1 ; i<=10 ; i++){
		total += i;
		cout << i << "||" << total << endl; 
	}
	
	return 0;
}
