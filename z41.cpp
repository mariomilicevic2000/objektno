// ZADATAK:
//
//
// Napisite genericku funkciju Vece() koja neka 
// prima listu elemenata i prag. Funkcija treba iz liste
// izbaciti sve elemente manje od praga.
// U main funkciji napravite primjer koristenja
// funkcije Vece() na listi varijabli tipa int.
// Elementi liste i prag su proizvoljni.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

template <class T> void Vece(list<T>& L, T prag) {
	typename list<T>::iterator iter;
	for (iter = L.begin(); iter != L.end(); ++iter) {
		if ((*iter) >= prag) {
			L.remove(*iter);
		}
	}
}

int main() {
	list<int> L1{ 1,2,3,4,5,6,7,8,9 };
	list<int>::iterator iter;

	Vece(L1, 5);
	for (iter = L1.begin(); iter != L1.end(); ++iter) {
		cout << *iter;
	}
	return 0;
}
