#include <iostream>
using namespace std;

// untuk menghitung luas persegi panjang
double hitung_luas(double p, double l) {
	double luas = p * l;

	return luas;
}

// untuk menghitung keliling persegi panjang
double hitung_keliling(double p, double l) {
	double keliling = 2 * (p + l);

	return keliling;
}

// untuk menampilkan luas
void print_luas(double p, double l) {
	cout << "Luasnya adalah: ";
	cout << hitung_luas(p, l) << endl;
}

// untuk menampilkan keliling
void print_keliling(double p, double l) {
	cout << "Kelilingnya adalah: ";
	cout << hitung_keliling(p, l) << endl;
}

int main() {

	double p, l;
	cout << "Panjang: ";
	cin >> p;
	cout << "Lebar: ";
	cin >> l;

	cout << endl;
	print_luas(p, l);
	print_keliling(p, l);

	return 0;
}