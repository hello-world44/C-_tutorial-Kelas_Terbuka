#include <iostream>
#include <array>

using namespace std;

int main() {

	// array
	array<int, 5> nilai;

	for (int i = 0; i <= 4; i++) {
		nilai[i] = i;
		cout << "Nilai [" << i << "] = " << nilai[i] << " Address: " << &nilai[i] << endl;
	}
	
	cout << endl;
	cout << "Ukuran: " << nilai.size() << endl;
	cout << "Address awal: " << nilai.begin() << endl;
	cout << "Address akhir: " << nilai.end() << endl;
	cout << "Nilai ke-2: " << nilai.at(2) << endl;

	return 0;
}