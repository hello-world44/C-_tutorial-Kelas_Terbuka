#include <iostream>

using namespace std;
/*
	1 byte = 8-bit.
	memori management menggunakan byte.

	  1   2   3   4   5   6   7   8
	---------------------------------
	| 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
	---------------------------------

	ilustrasi diatas menunjukan 1 byte.

	tipe data integer/int memiliki 4 byte, yang artinya 8-bit dikalikan dengan 4 byte 8 x 4 = 32.
	jadi kesimpulannya adalah integer itu 32-bit.

	tipe data integer memiliki nilai maximum dan minimum.
	nilai maximum dari integer adalah: 214748647.
	nilai minimum dari integer adalah: -214748647.
*/

int main() {

	int a = 1; // 32-bit
	long b = 6; // 64-bit
	short c = 7; // 16-bit
	float d = 5.5; // 32-bit
	double e = 2.5; // 64-bit
	char f = 'a'; // 8-bit
	bool g = true; // 8-bit

	cout << "Nilai a: " << a << endl;
	cout << "Ukuran dari a: " << sizeof(a) << " byte" << endl;

	cout << endl;

	cout << "Nilai b: " << b << endl;
	cout << "Ukuran dari b: " << sizeof(b) << " byte" << endl;

	cout << endl;

	cout << "Nilai c: " << c << endl;
	cout << "Ukuran dari c: " << sizeof(c) << " byte" << endl;

	cout << endl;

	cout << "Nilai d: " << d << endl;
	cout << "Ukuran dari d: " << sizeof(d) << " byte" << endl;

	cout << endl;

	cout << "Nilai e: " << e << endl;
	cout << "Ukuran dari e: " << sizeof(e) << " byte" << endl;

	cout << endl;

	cout << "Nilai f: " << f << endl;
	cout << "Ukuran dari f: " << sizeof(f) << " byte" << endl;

	cout << endl;

	cout << "Nilai g: " << g << endl;
	cout << "Ukuran dari g: " << sizeof(g) << " byte" << endl;
	return 0;
}