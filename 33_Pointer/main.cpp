#include <iostream>

using namespace std;

int main() {

	int a = 5;
	int *aPtr = &a; // pointer
	// int *aPtr = nullptr; // pointer null

	cout << "Nilai dari a: " << a << endl;
	cout << "Alamat dari a: " << &a << endl;
	cout << "Nilai dari a -> b: " << *aPtr << endl;

	return 0;
}
