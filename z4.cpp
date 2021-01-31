// Akrapović Antonio	876-2018	B320_1	504595509337408 5
//
// ZADATAK:
//
//
// Napišite genericku funkciju za određivanje maksimalne vrijednosti 
// imena max(). Funkcija neka bude napisana u obliku predloška, tako 
// da se može specijalizirati za razne tipove varijabli. 
// Funkcija neka prima tri argumenta, a neka vraća najveći 
// od njih. 
// U main funkciji upotrebite funkciju max() dva puta, jedan put za 
// varijable tipa double, drug put za int.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...
#include <iostream>
using namespace std;

template <class T>T max(T a, T b, T c) {
	T m;
	if (a > b)
		m = a;
	else
		m = b;
	if (m > c)
		m = m;
	else
		m = c;
	return m;
}

int main() {
	double d;
	int i;

	d = max(2.0, 6.8, 7.1);
	i = max(2, 6, 7);
	cout << d << " " << i << endl;
	return 0;
}


//template <class T> T max(T a, T b, T c) {
//	T m;
//	m = a > b ? a : b;
//	m = c > m ? c : m;
//
//	return m;
//}
//int main() {
//	double d;
//	int i;
//
//	i = max(4, 2, 7);
//	d = max(12.5, 1.3, 0.5);
//	return 0;
//}

