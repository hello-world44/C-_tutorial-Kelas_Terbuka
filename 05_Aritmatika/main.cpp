#include <iostream>

using namespace std;

/*
	operator aritmatika: +, *, /, -, %.

	urutan eksekusi: () tanda ini di eksekusi terlebih dahulu.
*/

int main()
{
	
	int a = 6;
	int b = 4;
	int c;

	// penjumlahan
	c = a + b;
	cout << a << " + " << b << " = " << c << endl;

	// pengurangan
	c = a - b;
	cout << a << " - " << b << " = " << c << endl;

	// perkalian
	c = a * b;
	cout << a << " * " << b << " = " << c << endl;

	// pembagian
	c = a / b;
	cout << a << " : " << b << " = " << c << endl;

	// modulus
	c = a % b;
	cout << a << " % " << b << " = " << c << endl;

	return 0;
}
