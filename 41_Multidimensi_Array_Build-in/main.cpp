#include <iostream>
#include <array>

using namespace std;

void printArray(int *ptrArray, int baris, int kolom) {
	int index = 0;

	for (int i = 0; i < baris; i++) {
		cout << "[ ";
		for (int j = 0; j < kolom; j++) {
			cout << *(ptrArray + index) << " ";
			index++;
		}
		cout << "]" << endl;
	}
}

int main() {

	// array multidimensi
	// array[baris][kolom]
	const int baris = 3;
	const int kolom = 4;
	int array[baris][kolom] = {0,1,2,3,4,5,6,7,8,9};

	// cout << array[0][0] << " " << array[0][1] << endl;
	// cout << array[1][0] << " " << array[1][1] << endl;

	printArray(*array, baris, kolom);

	return 0;
}