#include <iostream>

using namespace std;

/*
Array = Kumpulan data.
*/

int main() {
	// membuat array
	int nilai[5];

	nilai[0] = 1;
	nilai[1] = 2;
	nilai[2] = 3;
	nilai[3] = 4;
	nilai[4] = 5;

	cout << "Addess: " << &nilai[0] << " Value: " << nilai[0] << endl;
	cout << "Addess: " << &nilai[1] << " Value: " << nilai[1] << endl;
	cout << "Addess: " << &nilai[2] << " Value: " << nilai[2] << endl;
	cout << "Addess: " << &nilai[3] << " Value: " << nilai[3] << endl;
	cout << "Addess: " << &nilai[4] << " Value: " << nilai[4] << endl;

	int *ptr = nilai;
	*(ptr + 2) = 6;

	cout << endl;
	cout << "Addess: " << &nilai[0] << " Value: " << nilai[0] << endl;
	cout << "Addess: " << &nilai[1] << " Value: " << nilai[1] << endl;
	cout << "Addess: " << &nilai[2] << " Value: " << nilai[2] << endl;
	cout << "Addess: " << &nilai[3] << " Value: " << nilai[3] << endl;
	cout << "Addess: " << &nilai[4] << " Value: " << nilai[4] << endl;

	cout << endl;
	cout << "Ukuran array: " << sizeof(nilai) << " byte" << endl;
	cout << "Jumlah data array: " << sizeof(nilai)/sizeof(int) << endl;

	return 0;
}