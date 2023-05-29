 #include <iostream>
#include <math.h>
using namespace std;

int main () {
	double d1,d2,luas;
	
	
	cout << "-----------------------------------" << endl ;
	cout << " | Menghitung Luas Belah Ketupat | " << endl ;
	cout << "-----------------------------------" << endl;
	cout <<endl << endl ;
	
	cout << "======================" << endl ;
	cout << "masukan d1: " ;
	cin >> d1;
	cout << "masukan d2: " ;
	cin >> d2;
	cout << "======================" << endl ;
	cout << endl << endl ;
	
	cout << "***************************" << endl ;
	luas = d1 * d2/2 ;
	cout << "hasil luas: " << luas <<endl ;
	cout << "***************************" << endl ;
	
	return 0;
}
