#include <iostream>

using namespace std;
double volume_kubus(double p=3, double l=4, double t=5); // fungsi prototipe

int main() {
	cout << "volume kubus: " << volume_kubus() << endl;
	cout << "volume kubus: " << volume_kubus(5) << endl;
	cout << "volume kubus: " << volume_kubus(5,6) << endl;
	cout << "volume kubus: " << volume_kubus(1,2,3) << endl;
	return 0;
}

double volume_kubus(double p, double l, double t) {
	return p * l * t;
}