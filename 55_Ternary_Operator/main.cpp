#include <iostream>
#include <string>

using namespace std;

/*
	ternary operator = ?

	kondisi ? hasil1 : hasil2
*/

int main() {

	int a,b;
	string hasil1,hasil2,output;

	hasil1 = "hero";
	hasil2 = "juli";

	a = 4;
	b = 5;

	output = (a > b) ? hasil1 : hasil2;

	// if (a > b) {
	// 	output = hasil1;
	// } else {
	// 	output = hasil2;
	// }

	cout << output << endl;

	return 0;
}