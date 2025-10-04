#include <iostream>

using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main() {

	int a = 5;
	cout << "nilai dari a: " << a << endl;
	cout << "address dari a: " << &a << endl << endl;

	fungsi(a);
	cout << "nilai dari a: " << a << endl << endl;

	kuadrat(a);
	cout << "nilai dari a: " << a << endl;

	return 0;
}

void fungsi(int &b) {
	b = 10;
	cout << "nilai dari b: " << b << endl;
	cout << "address dari b: " << &b << endl << endl;
	cout << "nilai dari b: " << b << endl;
}

void kuadrat(int &nilaiRef) {
	nilaiRef = nilaiRef * nilaiRef;
}