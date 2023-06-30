#include <iostream>
#include <array>

using namespace std;

int main (){
	array<int,5>nilai;
	
	for (int i = 0 ; i <= 4 ; i ++){
		nilai [i] = i ;
		cout << nilai [i] << endl;
	}
}
