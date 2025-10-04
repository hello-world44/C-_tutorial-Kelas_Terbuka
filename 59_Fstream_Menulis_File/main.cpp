#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ofstream myFile;

	/*
		ios::out = operasi output -> default.
		ios::app = operasi tulis pada akhir baris.
		ios::trunc = membuat file jika tidak ada, jika ada akan dihapus -> default.
	*/

	myFile.open("data_1.txt", ios::out);
	myFile << "penulisan pada data 2";
	myFile.close();

	return 0;
}