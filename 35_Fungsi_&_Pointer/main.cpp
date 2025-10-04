#include <iostream>

using namespace std;

// prototipe
void pointer(int *);
void kuadrat(int *);

int main() {
	
	int a = 5;

	cout << "nilai dari a: " << a << endl;
	cout << "address dari a: " << &a << endl;

	pointer(&a); // fungsi dengan argumen pointer
	kuadrat(&a);
	cout << "nilai kuadrat dari a: " << a << endl;

	return 0;
}

void pointer(int *b) {
	cout << "nilai dari b: " << *b << endl; // dereferencing
	cout << "address dari b: " << b << endl << endl;
}

void kuadrat(int *valPtr) {
	*valPtr = (*valPtr * *valPtr);
}