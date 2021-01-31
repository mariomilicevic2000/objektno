#include<iostream>
using namespace std;
// ZADATAK:
//
//
// Deklarirana je klasa Razlomak, kojom se definira objekt razlomka određen cjelobrojnim brojnikom i nazivnikom:
// Napišite:
// - podrazumijevani konstruktor koji postavlja brojnik na 0, a nazivnik na 1
// - kopirni konstruktor
// - pristupne funkcije za nazivnik
// - postfix operator ++ koji neka poveća brojnik za iznos nazivnika
// - operator za ispisivanje, koji neka ispisuje dva cijela broja - brojnik i nazivnik odjeljena znakom '/'
// Napišite primjer funkcije main u kojem ćete upotrijebiti klasu Razlomak i njene funkcije.
//
// NAPOMENA : Nazivnik ne smije biti nula!
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

class Razlomak {
	int m_nazivnik;
public:
	int m_brojnik;
	Razlomak();
	Razlomak(const Razlomak& temp);
	int GetNazivnik();
	void SetNazivnik(int naz);
	Razlomak operator++();
};

Razlomak::Razlomak() {
	m_brojnik = 0;
	m_nazivnik = 1;
}

Razlomak::Razlomak(const Razlomak& temp) {
	m_brojnik = temp.m_brojnik;
	m_nazivnik = temp.m_nazivnik;
}

int Razlomak::GetNazivnik() {
	return m_nazivnik;
}

void Razlomak::SetNazivnik(int naz) {
	m_nazivnik = naz;
}

Razlomak Razlomak::operator++() {
	m_brojnik = m_brojnik + m_nazivnik;
	return *this;
}
ostream& operator << (ostream& out, Razlomak& s) {
	out << s.m_brojnik << "/" << s.GetNazivnik() << endl;
	return out;
}

int main() {
	// napišite kod prema zadatku
	Razlomak r, r1;

	r.m_brojnik = 2;
	r.SetNazivnik(5);
	//r1(r);
	cout << r << endl;
	r.m_brojnik++;
	cout << r << endl;
	return 0;
}
