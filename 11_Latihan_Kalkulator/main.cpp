#include <iostream>

using namespace std;

int main() {
	float a,b,hasil;
	char aritmatika;

	cout << "Selamat datang di program kalkulator sederhana\n\n" << endl;

	cout << "Masukan angka pertama: ";
	cin >> a;
	cout << "Masukan operator: ";
	cin >> aritmatika;
	cout << "Masukan angka kedua: ";
	cin >> b;

	if (aritmatika == '+')
	{
		hasil = a + b;
		cout << a << " + " << b << " = " << hasil << endl;
	} else if (aritmatika == '-')
	{
		hasil = a - b;
		cout << a << " - " << b << " = " << hasil << endl;
	} else if (aritmatika == '*')
	{
		hasil = a * b;
		cout << a << " x " << b << " = " << hasil << endl;
	} else if (aritmatika == '/')
	{
		hasil = a / b;
		cout << a << " : " << b << " = " << hasil << endl;
	} else {
		cout << "Operator yang anda masukan tidak valid." << endl;
	}
	

	return 0;
}