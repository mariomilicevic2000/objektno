// ZADATAK:
//
//
// Napisite funkciju FindInt() kojom se pretrazuje lista integera.
// Funkcija treba u listi L pronaci integer i.
// Ukoliko ga pronadje neka vrati istinu, inace laz.
// Trazenje napravite funkcijom find() iz biblioteke <algorithm>.
// Napisite main() funkciju sa primjerom koristenja funkcije 
// FindInt().
//
// NAPOMENA: STL funkcija find() vraca iterator end() ukoliko
// je potraga neuspjesna.
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...
#include <iostream>
#include <list>
#include <algorithm>;
using namespace std;

bool FindInt(const list<int>& L, int i) {
	list<int>::iterator iter;
	if (iter == find(L.begin(), L.end(), i)) {
		return true;
	}
	else
		return false;
	/*for (iter = L.begin(); iter != L.end(); ++iter) {
		if (*iter == i) {
			return true;
		}
		else {
			return false;
		}
	}*/
}

int main() {
	list<int> l{ 1,2,3,4,5,6,7,8,9 };
	bool b;
	b = FindInt(l, 5);
	if (b) {
		cout << "Pronaden" << endl;
	}
	else {
		cout << "Nema ga" << endl;
	}
	return 0;
}
