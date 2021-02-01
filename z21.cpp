// ZADATAK:
//
//
// Tekstualna datoteka "ulaz.num" sadrži cijele brojeve. Napisite program 
// kojim se citaju svi brojevi iz ulazne datoteke, te se u drugu tekstualnu
// datoteku imena "poz.num" ispisuju svi pozitivni brojevi iz prve datoteke.
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// ukljucite potrebne biblioteke...
#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int a;
	ifstream ulaz("ulaz.num");
	ofstream izlaz("poz.num");
	while (ulaz >> a) {
		cout << a << " ";
		if (a > 0) {
			izlaz << a << " ";
		}
	}
	ulaz.close();
	izlaz.close();
	return 0;
}
