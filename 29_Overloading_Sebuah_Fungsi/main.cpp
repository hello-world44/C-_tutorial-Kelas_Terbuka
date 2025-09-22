#include <iostream>

using namespace std;

int luas_kotak(int p, int l) {
	int luas = p * l;

	return luas;
}

// overload function
int luas_kotak(int p) {
	int luas = p * p;

	return luas;
}

// overload function
double luas_kotak(double p) {
	double luas = p * p;

	return luas;
}

int main() {
	cout << "Luas kotak 2 x 3 = " << luas_kotak(2,3) << endl;
	cout << "Luas kotak 2 x 2 = " << luas_kotak(2) << endl;
	cout << "Luas kotak 2.5 x 2.5 = " << luas_kotak(2.5) << endl;

	return 0;
}