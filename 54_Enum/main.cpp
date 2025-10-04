#include <iostream>

using namespace std;

enum warna {
	merah,
	putih,
	hitam,
	cokelat,
	kuning,
	biru
};

int main() {

	warna kain;

	kain = merah;

	if (kain == 0) {
		cout << "warna kain merah" << endl;
	}

	cout << kain << endl;

	return 0;
}