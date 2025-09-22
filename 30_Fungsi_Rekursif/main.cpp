#include <iostream>

using namespace std;

/*
	recursion = pengulangan.
*/

// fungsi rekursif terbatas
int pangkat_iterasi(int a, int b) {
	int hasil = a;
	for(int i = 1; i < b; i++) {
		hasil = hasil * a;
	}

	return hasil;
}

int pangkat_rekursif(int a, int b) {
	if (b <= 1){
		return a;
	} else {
		return a * pangkat_rekursif(a, (b-1));
	}
}

int main() {
	int a;
	int b;
	cout << "Masukan angka: ";
	cin >> a;
	cout << "Masukan pangkat: ";
	cin >> b;
	cout << a << " pangkat " << b << " = " << pangkat_iterasi(a,b) << endl;
	cout << a << " pangkat " << b << " = " << pangkat_rekursif(a,b) << endl;
	
	return 0;
}