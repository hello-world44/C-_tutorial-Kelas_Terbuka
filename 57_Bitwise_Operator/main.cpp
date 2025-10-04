#include <iostream>
#include <bitset>
#include <string>

using namespace std;

/*
	bitwise operator:
	Bitwise and : & atau AND
	Bitwise or  : | atau OR
	Bitwise xor : ^ atau XOR
	Bitwise not : ~ atau NOT
	Bitwise shl : << geser bit kekiri
	Bitwise shr : >> geser bit kekanan
*/
void printBinary(unsigned short val, string nama) {
	cout << nama << ": " << bitset<8>(val) << endl;
	/*
		Hasilnya: 00000101
		cara menghitung binernya.
		00000101
		76543210 -> pangkat dari masing-masing nilai biner diatas.

		00000101 = 2**0 + 2**2 -> angka 2 berasal dari biner 1.
		2**0 = 1
		2**2 = 4
		lalu tambahkan hasilnya: 1 + 4 = 5.
	*/
}

int main() {

	unsigned short a = 5;
	unsigned short b = 10;
	unsigned short c;

	cout << "===== AND =====" << endl;
	c = a & b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cout << endl;

	cout << "===== OR =====" << endl;
	c = a | b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cout << endl;

	cout << "===== XOR =====" << endl;
	c = a ^ b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cout << endl;

	cout << "===== NOT =====" << endl;
	c = ~a;
	printBinary(a,"a");
	printBinary(c,"c");

	cout << endl;

	cout << "===== SHL =====" << endl;
	c = a << b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	cout << endl;

	cout << "===== SHR =====" << endl;
	c = a >> b;
	printBinary(a,"a");
	printBinary(b,"b");
	printBinary(c,"c");

	return 0;
}