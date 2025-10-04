#include <iostream>

using namespace std;

int main() {

	int a = 5;
	float b = 6.67f;
	char c = 'd';

	// int hasil; // hasilnya terantung dari tipe data variable ini.
	// hasil = a + b;
	cout << a + (int)b << endl;
	cout << (int)c << endl;
	cout << (char)(c + a) << endl;

	return 0;
}