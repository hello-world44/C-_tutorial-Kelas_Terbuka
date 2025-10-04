#include <iostream>

using namespace std;

int main() {
	int a = 1;

	do {
		cout << "Hello World "; // akan di eksekusi minimal sekali.
		cout << a << endl;
		a++;
	} while (a <= 10);
	
	cout << "Selesai..." << endl;
	return 0;
}