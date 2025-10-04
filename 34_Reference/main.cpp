#include <iostream>

using namespace std;

int main() {

	int a = 5; // variable

	cout << "nilai dari a: " << a << endl;
	cout << "address dari a: " << &a << endl;

	int &b = a; // reference

	cout << "nilai dari b: " << b << endl;
	cout << "address dari b: " << &b << endl << endl;

	b = 10;
	cout << "nilai dari a: " << a << endl;
	cout << "nilai dari b: " << b << endl << endl;

	a = 50;
	cout << "nilai dari a: " << a << endl;
	cout << "nilai dari b: " << b << endl;

	return 0;
}