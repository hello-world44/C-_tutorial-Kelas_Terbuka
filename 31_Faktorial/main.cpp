#include <iostream>

using namespace std;

int factorial(int n) {
	if (n <= 1) {
		cout << n;
		return n;
	} else {
		cout << n << " x ";
		return n * factorial(n - 1);
	}
}

int main() {

	int a, hasil;
	cout << "menghitung faktorial dari: ";
	cin >> a;

	hasil = factorial(a);
	cout << " = " << hasil << endl;

	return 0;
}