#include <iostream>

using namespace std;

int main() {
	int a; // Deklarasi
	int b;
	int c;

	cout << "Masukan angka pertama: ";
	cin >> a;
	cout << "Masukan angka kedua: ";
	cin >> b;
	
	c = a + b; // Inisialisasi
	cout << "\nHasil dari penjumlahan " << a << " dan " << b << " adalah " << c << endl;
	return 0;
}