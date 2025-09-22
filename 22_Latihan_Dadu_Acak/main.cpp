#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

	char lanjut;
	while(true) {
		cout << "Lempar dadu: ";
		cin >> lanjut;

		if(lanjut == 'y') {
			cout << 1 + (rand() % 6) << endl;
		} else if (lanjut == 'n') {
			break;
		} else {
			cout << "[WARNING]: Masukan y/n kawan." << endl;
		}
		
	}

	return 0;
}