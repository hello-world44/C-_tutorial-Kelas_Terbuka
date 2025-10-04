#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;
void printAngka(array <int, arraySize> &angka);
void printHuruf(array <char, arraySize> &huruf);

int main() {

	array <int, arraySize> angka = {9,8,7,6,5,4,3,2,1,0};

	int target;
	bool ketemu;

	cout << "Masukan angka target: ";
	cin >> target;
	system("clear");

	printAngka(angka);

	// sorting
	sort(angka.begin(), angka.end());
	// searching -> binary_search
	ketemu = binary_search(angka.begin(), angka.end(), target);

	printAngka(angka);
	cout << endl;

	if (ketemu) {
		cout << "Ada." << endl;
	} else {
		cout << "Tidak Ada." << endl;
	}

	return 0;
}

void printAngka(array <int, arraySize> &angka) {
	cout << "Angka: ";
	for (int &a : angka) {
		cout << a << " ";
	}
	cout << endl;
}

void printHuruf(array <char, arraySize> &huruf) {
	cout << "Huruf: ";
	for (char &a : huruf) {
		cout << a << " ";
	}
	cout << endl;
}