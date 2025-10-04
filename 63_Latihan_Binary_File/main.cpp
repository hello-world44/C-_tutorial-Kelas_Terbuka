#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct  Mahasiswa {
	int NIM;
	string nama;
	string jurusan;
};


int main() {

	fstream myFile;

	myFile.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);

	Mahasiswa mahasiswa1, mahasiswa2, mahasiswa3;

	mahasiswa1.NIM = 123;
	mahasiswa1.nama = "Oscar";
	mahasiswa1.jurusan = "Memasak";

	mahasiswa2.NIM = 123;
	mahasiswa2.nama = "John";
	mahasiswa2.jurusan = "Memukul";

	mahasiswa3.NIM = 123;
	mahasiswa3.nama = "Putra";
	mahasiswa3.jurusan = "Menyanyi";

	// menulis data
	myFile.write(reinterpret_cast<char*>(&mahasiswa1), sizeof(Mahasiswa));
	myFile.write(reinterpret_cast<char*>(&mahasiswa2), sizeof(Mahasiswa));
	myFile.write(reinterpret_cast<char*>(&mahasiswa3), sizeof(Mahasiswa));

	// membaca data
	myFile.read(reinterpret_cast<char*>(&mahasiswa1), sizeof(Mahasiswa));
	myFile.read(reinterpret_cast<char*>(&mahasiswa2), sizeof(Mahasiswa));
	myFile.read(reinterpret_cast<char*>(&mahasiswa3), sizeof(Mahasiswa));
	
	cout << "==== Mahasiswa_1 ====" << endl;
	cout << "NIM:\t\t" << mahasiswa1.NIM << endl;
	cout << "Nama:\t\t" << mahasiswa1.nama << endl;
	cout << "Jurusan:\t" << mahasiswa1.jurusan << endl << endl;

	cout << "==== Mahasiswa_2 ====" << endl;
	cout << "NIM:\t\t" << mahasiswa2.NIM << endl;
	cout << "Nama:\t\t" << mahasiswa2.nama << endl;
	cout << "Jurusan:\t" << mahasiswa2.jurusan << endl << endl;

	cout << "==== Mahasiswa_3 ====" << endl;
	cout << "NIM:\t\t" << mahasiswa3.NIM << endl;
	cout << "Nama:\t\t" << mahasiswa3.nama << endl;
	cout << "Jurusan:\t" << mahasiswa3.jurusan << endl;
	myFile.close();

	return 0;
}