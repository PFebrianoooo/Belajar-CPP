#include <iostream>

using namespace std;


// prototype fungsi dan default argument
double vol_kubus (double p, double l = 2 , double t = 3);


main(){
	
	cout << "volume kubus : " << vol_kubus (3,4,5) << endl;
	cout << "volume kubus default argument : " << vol_kubus (3,4) << endl;
	cout << "volume kubus default argument : " << vol_kubus (10) << endl;
	return 0;
}

// fungsi dengan pengembalian
double vol_kubus (double p, double l, double t){
	return p * l * t;
}
