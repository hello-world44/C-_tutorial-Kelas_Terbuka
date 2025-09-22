#include <iostream>

using namespace std;

// prototype function
double hitung_luas(double p, double l);

int main() {
	double p, l;

	cout << "Panjang: ";
	cin >> p;
	cout << "Lebar: ";
	cin >> l;

	cout << "Hasilnya: " << hitung_luas(p, l) << endl;
	return 0;
}

double hitung_luas(double p, double l) {
	return p * l;
}