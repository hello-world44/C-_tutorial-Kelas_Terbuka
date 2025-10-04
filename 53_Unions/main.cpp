#include <iostream>

using namespace std;

/*
	Union: Data yang berlapis, dalam satu address.
*/

union test {
	int int_value;
	char char_value[4];
};


int main() {

	test nama;
	nama.int_value = 100;

	cout << "data a: " << nama.int_value << endl;
	cout << "data b: " << nama.char_value << endl << endl;

	nama.char_value[0] = 'h';
	nama.char_value[1] = 'e';
	nama.char_value[2] = 'l';
	nama.char_value[3] = 'o';

	cout << "data a: " << nama.int_value << endl;
	cout << "data b: " << nama.char_value << endl << endl;

	return 0;
}