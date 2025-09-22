#include <iostream>

using namespace std;

/*
	Komparasi boolean:
	< = kurang dari.
	> = lebih dari.
	<= = kurang dari atau sama dengan.
	>= = lebih dari atau sama dengan.
	== = sama dengan.
	!= = tidak sama dengan.
*/

int main()
{
	int a = 5;
	int b = 5;

	bool hasil1;

	hasil1 = (a == b);
	cout << "==: " << hasil1 << endl;

	cout << endl;

	hasil1 = (a != b);
	cout << "!=: " << hasil1 << endl;

	cout << endl;

	hasil1 = (a < b);
	cout << "<: " << hasil1 << endl;

	cout << endl;

	hasil1 = (a > b);
	cout << ">: " << hasil1 << endl;

	cout << endl;

	hasil1 = (a <= b);
	cout << "<=: " << hasil1 << endl;

	cout << endl;

	hasil1 = (a >= b);
	cout << ">=: " << hasil1 << endl;
	return 0;
}
