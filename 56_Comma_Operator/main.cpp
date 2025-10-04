#include <iostream>
#include <string>

using namespace std;

int main() {

	int a,b,c;

	a = (b = 4, cout << "B: " << b << endl, c = 8, cout << "C: " << c << endl, (b + c));

	cout << "A: " << a << endl;

	return 0;
}