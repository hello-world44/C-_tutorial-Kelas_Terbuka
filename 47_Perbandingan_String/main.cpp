#include <iostream>
#include <string>

using namespace std;

int main() {

	string input;
	string secret("oscar");

	while (true) {
		cout << "Tebak nama: ";
		cin >> input;
		system("clear");
		
		if (input == secret) {
			cout << "Kamu benar nama rahasianya adalah " << secret << endl;
			break;
		} else {
			cout << "Salah!!, " << input << " Bukan nama yang benar." << endl;
		}
	}

	return 0;
}