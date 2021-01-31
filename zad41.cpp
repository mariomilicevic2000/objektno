#include <iostream>
using namespace std;
// ZADATAK:
//
//
// Napišite generičku funkciju za zamijenu vrijednosti imena swap. 
// Funkcija neka bude napisana u obliku predloška, tako da se može 
// specijalizirati za razne tipove varijabli. 
// Funkcija neka prima dva argumenta putem reference čije vrijednosti 
// međusobno mijenja. 
// U main funkciji upotrebite funkciju swap dva puta, jedan put za 
// varijable tipa double, drug put za int.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...
template <class T>T swap(T& x, T& y) {
	T temp;

	temp = x;
	x = y;
	y = temp;
}

int main() {
	// dodajte naredbe glavne funkcije...
	int a, b;
	double c, d;
	a = 2;
	b = 3;
	c = 4;
	d = 5;
	swap<int>(a, b);
	cout << a << " " << b << endl;
	swap<double>(b, c);
	cout << c << " " << d << endl;

	return 0;
}

