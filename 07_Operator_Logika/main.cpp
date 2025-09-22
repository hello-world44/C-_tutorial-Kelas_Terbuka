#include <iostream>

using namespace std;

/*
	Operator logika: not, and, or.
	untuk pembelajaran lebih lanjut pelajari aljabar boolean.
*/

int main() {
	int a = 3;
	int b = 2;
	bool hasil;

	// not
	hasil = !(a == 3);
	cout << "not: " << hasil << endl;

	cout << "---------------------" << endl;

	// and | kedua nilai harus benar untuk menghasilkan nilai true.
	hasil = (a == 3) and (b == 2); // true and true
	cout << "true and true: " << hasil << endl;
	hasil = (a == 2) and (b == 2); // false and true
	cout << "false and true: " << hasil << endl;
	hasil = (a == 3) && (b == 3); // true and false
	cout << "true and false: " << hasil << endl;
	hasil = (a == 1) && (b == 1); // false and false
	cout << "false and false: " << hasil << endl;

	cout << "---------------------" << endl;

	// or | kedua nilai atau salah satu bernilai true akan menghasilkan nilai true.
	hasil = (a == 3) or (b == 2); // true or true
	cout << "true or true: " << hasil << endl;
	hasil = (a == 2) or (b == 2); // false or true
	cout << "false or true: " << hasil << endl;
	hasil = (a == 3) || (b == 3); // true or false
	cout << "true or false: " << hasil << endl;
	hasil = (a == 1) || (b == 1); // false or false
	cout << "false or false: " << hasil << endl;

	return 0;
}