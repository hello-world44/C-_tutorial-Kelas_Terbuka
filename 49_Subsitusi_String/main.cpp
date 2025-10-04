#include <iostream>
#include <string>

using namespace std;

int main() {

	string kalimat_1("Hello World");
	string kalimat_2("Halo Dunia");

	cout << "String Asli" << endl;
	cout << "Variable 1: " << kalimat_1 << endl;
	cout << "Variable 2: " << kalimat_2 << endl << endl;

	// swap string
	cout << "String Swap" << endl;
	kalimat_1.swap(kalimat_2);
	cout << "Variable 1: " << kalimat_1 << endl;
	cout << "Variable 2: " << kalimat_2 << endl << endl;

	// replace string
	cout << "String Replace" << endl;
	kalimat_1.replace(
		kalimat_1.find("Dunia"),
		5,
		"World"
	);
	kalimat_2.replace(
		kalimat_2.find("World"),
		5,
		"Dunia"
	);

	cout << "Variable 1: " << kalimat_1 << endl;
	cout << "Variable 2: " << kalimat_2 << endl << endl;

	// insert string
	cout << "String Insert" << endl;
	kalimat_1.insert(5, "& ");
	kalimat_2.insert(6, "& ");
	cout << "Variable 1: " << kalimat_1 << endl;
	cout << "Variable 2: " << kalimat_2 << endl << endl;


	return 0;
}