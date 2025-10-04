#include <iostream>

using namespace std;

int main() {

	int a;

	cout << "Silahkan masukan angka: " << endl;
	cin >> a;

	switch(a % 2 == 0) {
		case true:
			cout << "Angka yang anda masukan adalah bilangan genap." << endl;
			break;
		case false:
			cout << "Angka yang anda masukan adalah bilangan ganjil." << endl;
			break;
	}

	return 0;
}