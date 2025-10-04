#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	/*
		// membuat file data.txt.

		ofstream myFile;

		myFile.open("data.txt", ios::out);
		myFile << "Hello World" << endl;
		myFile << endl;
		myFile << "[1]. Opsi 1" << endl;
		myFile << "[2]. Opsi 2" << endl;
		myFile << "[3]. Opsi 3" << endl;
		myFile << "[4]. Opsi 4" << endl;
		myFile << "[5]. Opsi 5" << endl;
		myFile << "[6]. Opsi 6" << endl;
		myFile << "[7]. Opsi 7" << endl;
		myFile.close();
	*/

	// membaca file data.txt.
	/*
		ios::in -> membaca file: default.
		ios::ate -> mulai dari akhir file.
		ios::binary -> untuk membaca file biner.
	*/

	ifstream myFile;
	string output, buffer;
	bool isData = false;
	int no;
	string nama;

	myFile.open("data.txt");
	
	while (!isData) {
		getline(myFile, buffer);
		output.append("\n" + buffer);
		if (buffer == "data") {
			isData = true;
		}
	}

	cout << output << endl;

	getline(myFile, buffer);
	cout << buffer << endl;
	int jumlah_data = 0;
	while (!myFile.eof()) {
		myFile >> no;
		myFile >> nama;

		cout << no << "   " << nama << endl;
		jumlah_data++;
	}

	cout << "Jumlah data: " << jumlah_data << endl;

	return 0;
}