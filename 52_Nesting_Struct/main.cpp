#include <iostream>
#include <string>

using namespace std;

struct aktor {
	string nama;
	int tahun_lahir;
};


struct film {
	string judul;
	string genre;
	int tahun;
	aktor pemeran_1;
	aktor pemeran_2;
};


int main() {

	aktor aktor_1, aktor_2;
	film film_1;

	aktor_1.nama = "John Wick";
	aktor_1.tahun_lahir = 1997;

	aktor_2.nama = "Jashon Statham";
	aktor_2.tahun_lahir = 1955;

	film_1.judul = "Beranak dalam Kardus";
	film_1.genre = "Horor";
	film_1.tahun = 2017;
	film_1.pemeran_1 = aktor_1;
	film_1.pemeran_2 = aktor_2;

	cout << "==== DETAIL FILM ====" << endl;
	cout << "Judul:\t\t\t " << film_1.judul << endl;
	cout << "Genre:\t\t\t " << film_1.genre << endl;
	cout << "Tahun:\t\t\t " << film_1.tahun << endl;
	cout << "Pemeran 1: " << endl;
	cout << "[+] Nama:\t\t " << film_1.pemeran_1.nama << endl;
	cout << "[+] Tahun Lahir:\t " << film_1.pemeran_1.tahun_lahir << endl;
	cout << "Pemeran 2: " << endl;
	cout << "[+] Nama:\t\t " << film_1.pemeran_2.nama << endl;
	cout << "[+] Tahun Lahir:\t " << film_1.pemeran_2.tahun_lahir << endl;

	return 0;
}