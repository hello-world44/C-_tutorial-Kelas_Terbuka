#include <iostream>

using namespace std;

// global scope
int x = 10; // global variable

int ambil_x() {
	return x;
}

int main() {

	cout << "Global scope: " << x << endl;
	// local scope
	int x = 8; // local variable
	cout << "Local scope: " << x << endl;
	cout << "Funsi ambil_x global: " << ambil_x() << endl;

	{
		// block scope
		cout << "Local scope: " << x << endl;
		cout << "Global scope: " << ::x << endl;
		int x = 1; // block variable
		cout << "Block scope: " << x << endl;
	}
	cout << "Local scope: " << x << endl;

	return 0;
}