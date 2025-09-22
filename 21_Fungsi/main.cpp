#include <iostream>
#include <cmath>

using namespace std;
/*
	DRY: Don't Repeat Yourself.

	Library cmath: referensi www.cppreference.com/
	ceil(x)    -> Pembulatan ke atas.
	cos(x)     -> cosinus.
	exp(x)     -> eksponen.
	fabs(x)    -> nilai absolut dalam float.
	floor(x)   -> pembulatan ke bawah.
	fmod(x)    -> modulus dalam float.
	log(x)     -> logaritma dengan basis natural.
	log10(x)   -> logaritma dengan basis 10.
	pow(x,y)   -> x pangkat y.
	sin(x)     -> sinus.
	sqrt(x)    -> akar kuadrat.
	tan(x)     -> tangen.
*/

int main() {

	int x;

	cout << "Masukan nilai x: ";
	cin >> x;

	cout << "Hasil dari akar kuadrat dari x adalah: " << sqrt(x) << endl;
	cout << "Hasil dari sinus dari x adalah: " << sin(x) << endl;
	cout << "Hasil dari logaritma dari x adalah: " << log(x) << endl;

	return 0;
}