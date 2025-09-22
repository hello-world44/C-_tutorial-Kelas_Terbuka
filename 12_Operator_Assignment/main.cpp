#include <iostream>

using namespace std;

int main() {
	// assigment
	int a = 10;
	
	// assignment operator
	a += 3;
	cout << "10 ditambah 3: " << a << endl;
	a -= 3;
	cout << "10 dikurangi 3: " << a << endl;
	a *= 3;
	cout << "10 dikali 3: " << a << endl;
	a /= 3;
	cout << "10 dibagi 3: " << a << endl;
	a %= 3;
	cout << "10 modulus 3: " << a << endl;

	return 0;
}