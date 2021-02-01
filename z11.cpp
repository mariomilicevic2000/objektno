// ZADATAK:
//
//
// Deklarirana je klasa Razlomak, kojom se definira objekt razlomka odredjen cjelobrojnim 
// brojnikom i nazivnikom. Napisite:
// - operator = 
// - operator > 
// - operator za citanje, koji neka sa ulaznog toka cita brojnik i nazivnik
// Napisite primjer funkcije main() u kojem cete upotrijebiti klasu Razlomak i njene operatore.
// U funkciji main() objekte klase Razlomak alocirajte/dealocirajte dinamicki.
//
// NAPOMENA : Nazivnik ne smije biti nula!
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...
#include <iostream>
using namespace std;

class Razlomak {
	int m_nazivnik;
public:
	int m_brojnik;
	Razlomak() { m_brojnik = 0; m_nazivnik = 1; }
	int GetNazivnik() { return m_nazivnik; }
	void SetNazivnik(int naz) { m_nazivnik = (naz != 0 ? naz : m_nazivnik); }
	Razlomak& operator= (const Razlomak& raz);
	friend bool operator> (const Razlomak& raz1, const Razlomak& raz2);
	friend istream& operator >> (istream& in, Razlomak& raz);
};

Razlomak& Razlomak::operator= (const Razlomak& raz) {
	m_brojnik = raz.m_brojnik;
	m_nazivnik = raz.m_nazivnik;
	return *this;
}

bool operator> (const Razlomak& raz1, const Razlomak& raz2) {
	float fraz1, fraz2;

	fraz1 = (float)raz1.m_brojnik / (float)raz1.m_nazivnik;
	fraz2 = (float)raz2.m_brojnik / (float)raz2.m_nazivnik;
	if (fraz1 > fraz2)
		return true;
	else
		return false;
}

istream& operator >> (istream& in, Razlomak& raz) {
	int btemp, ntemp;
	if (in >> btemp >> ntemp) {
		raz.m_brojnik = btemp;
		raz.SetNazivnik(ntemp);
	}
	return in;
}

int main() {
	Razlomak raz1, raz2;

	cin >> raz1;
	cin >> raz2;
	cout << raz1.m_brojnik << "/" << raz1.GetNazivnik() << endl;
	cout << raz2.m_brojnik << "/" << raz2.GetNazivnik() << endl;
	cout << "Je li " << raz1.m_brojnik << "/" << raz1.GetNazivnik() << " veci od " << raz2.m_brojnik << "/" << raz2.GetNazivnik() << "?" << endl;
	cout << (raz1 > raz2) << endl;
	return 0;
}
