#include <iostream>
#include <array>

using namespace std;

int main() {

	// int Array[10] = {0,1,2,3,4,5,6,7,8,9};
	array <int, 10> Array = {0,1,2,3,4,5,6,7,8,9};

	for (int nilai : Array) {
		cout << "Addeass: " << &nilai << " Value: " << nilai << endl;
	}

	cout << endl;

	// memanipulasi array menggunakan referensi
	for (int &nilaiRef : Array) {
		nilaiRef *= 2;
		cout << "Addeass: " << &nilaiRef << " Value: " << nilaiRef << endl;
	}

	cout << endl;

	for (int &nilaiRef : Array) {
		cout << "Addeass: " << &nilaiRef << " Value: " << nilaiRef << endl;
	}

	return 0;
}