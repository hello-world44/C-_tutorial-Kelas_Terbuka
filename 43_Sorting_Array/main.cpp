#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t arraySize = 10;

void printAngka(array <int, arraySize> &angka);
void printHuruf(array <char, arraySize> &huruf);

int main() {

	array <int, arraySize> angka = {9,8,7,6,5,4,3,2,1,0};
	array <char, arraySize> huruf = {'j','i','h','g','f','e','d','c','b','a'};

	printAngka(angka);
	printHuruf(huruf);

	cout << endl;
	sort(angka.begin(), angka.end());
	sort(huruf.begin(), huruf.end());
	printAngka(angka);
	printHuruf(huruf);

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