#include <iostream>

using namespace std;
/*
	Fibonacci -> deret: 1 1 2 3 5 8 13 21 34 ...

	f(6) = 1 1 2 3 5 8
	rumusnya:
	f(n) = f(n-1) + f(n-2)

	misal:
	f(3) = f(3-1) + f(3-2)
	f yang ke-3 adalah angka 2, sesuai dengan yang di atas.
	f 3-1 berarti angka 1 yang ke dua dan f 3-2 berarti angka 1 yang pertama, jadi:
	2 = 1 + 1
*/

int main() {
	// f_n = f_n1 + f_n2
	int n, f_n, f_n1, f_n2;

	cout << "Program deret fibonacci\n";
	cout << "Masukan nilai n: ";
	cin >> n;

	f_n1 = 1;
	f_n2 = 0;
	cout << f_n2 << " ";
	cout << f_n1 << " ";
	for (int i = 1; i < n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n << " ";
	}

	cout << endl;

	return 0;
}