#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "masukan angka: ";
	cin >> a;

	if (a == 10) {
		cout << "angka yang anda masukan adalah: " << a << endl;
	} else if (a > 11) {
		cout << "Entah lah..." << endl;
	} else {
		cout << "Kerja bagus" << endl;
	}

	return 0;
}