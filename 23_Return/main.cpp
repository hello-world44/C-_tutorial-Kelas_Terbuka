#include <iostream>
using namespace std;

int kuadrat(int x) {
	int y;
	y = x * x;

	return y;
}

int tambah(int a, int b) {
	int c;
	c = a + b;

	return c;
}

int main() {

	int n, hasil;

	cout << "Masukan angka: ";
	cin >> n;

	hasil = kuadrat(n);
	cout << "Nilai kuadrat dari " << n << " adalah: " << hasil << endl;

	cout << endl;

	int a, b, hasil2;
	cout << "Masukan nilai pertama: ";
	cin >> a;
	cout << "Masukan nilai kedua: ";
	cin >> b;
	hasil2 = tambah(a, b);

	cout << a << " + " << b << " = " << hasil2 << endl;

	return 0;
}