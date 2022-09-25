#include <iostream>
#include <string>
using namespace std;

int main() {
	double a;
	//double z1;
	double z2;
	cout << "Enter an number: ";  cin >> a;
	//z1 = (1.0 - 1.0 / 4 * pow(2 * sin(a) * cos(a), 2) + (cos(2*a))); 
	//cout <<"Result, z1: " << z1 << endl;
	z2 = pow(cos(a), 2) + pow(cos(a), 4);
	cout << "Result, z2: " << z2 << endl;
	//if (z1 == z2) {
		//cout << "That`s right!";
//}
	  





	return 0;
}