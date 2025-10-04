#include <iostream>
#include <string>

using namespace std;

// struct: data yang dibentuk oleh beberapa data

struct buah {
	string warna;
	double berat;
	int harga;
	string rasa;
};

int main() {

	buah anggur;
	buah jeruk;
	
	anggur.warna = "ungu";
	anggur.berat = 17.5;
	anggur.harga = 12000;
	anggur.rasa = "manis";

	jeruk.warna = "orange";
	jeruk.berat = 5;
	jeruk.harga = 15000;
	jeruk.rasa = "manis";

	cout << "==== INFO ANGGUR ====" << endl;
	cout << "Warna: " <<  anggur.warna << endl;
	cout << "Berat: " <<  anggur.berat << endl;
	cout << "Harga: " <<  anggur.harga << endl;
	cout << "Rasa : " <<  anggur.rasa << endl << endl;

	cout << "==== INFO JERUK ====" << endl;
	cout << "Warna: " <<  jeruk.warna << endl;
	cout << "Berat: " <<  jeruk.berat << endl;
	cout << "Harga: " <<  jeruk.harga << endl;
	cout << "Rasa : " <<  jeruk.rasa << endl;

	return 0;
}