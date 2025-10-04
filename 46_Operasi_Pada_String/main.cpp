#include <iostream>
#include <string>

using namespace std;

int main() {

	string kata("cat");

	cout << kata << endl; // menampilkan data string

	// mengambil krakter berdasarkan index
	cout << "Index ke-0 dari kata: " << kata[0] << endl;
	cout << "Index ke-1 dari kata: " << kata[1] << endl;
	cout << "Index ke-2 dari kata: " << kata[2] << endl << endl;

	// merubah karakter pada index
	cout << "Merubah karakter pada index ke-1" << endl;
	kata[1] = 'e';
	cout << kata << endl << endl;

	// menyambung/concatenation
	cout << "Menyambung karakter pada kata" << endl;
	string kata2(kata + "ar");
	cout << kata2 << endl << endl;

	// menambah dan menyambung
	cout << "Menambah & Menyambung kata" << endl;
	string kata3(" membahana");
	kata2.append(kata3);
	cout << kata2 << endl;

	string kata4("halo");
	kata2 += " " + kata4;
	cout << kata2 << endl;

	return 0;
}