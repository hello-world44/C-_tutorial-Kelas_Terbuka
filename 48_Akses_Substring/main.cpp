#include <iostream>
#include <string>

using namespace std;

int main() {

	string kalimat("Hello World");
	string kalimat2("Halo Dunia");

	cout << "Kalimat ke-1: " << kalimat << endl;
	cout << "Kalimat ke-2: " << kalimat2 << endl << endl;

	// substring, mengambil suatu kata dari variable kalimat
	// substr(index,panjang)
	cout << "Mengambil kata 'World' dari variable kalimat." << endl;
	cout << kalimat.substr(6, 5) << endl << endl;

	cout << "Mengambil kata 'Dunia' dari variable kalimat2." << endl;
	cout << kalimat2.substr(5, 5) << endl << endl;

	// mencari posisi dari substring
	cout << "Mencari posisi index kata 'World' dari variable kalimat." << endl;
	cout << "Kata 'World' berada di index ke-" << kalimat.find("World") << endl << endl;

	cout << "Mencari posisi index kata 'Dunia' dari variable kalimat2." << endl;
	cout << "Kata 'Dunia' berada di index ke-" << kalimat2.find("Dunia") << endl;

	return 0;
}