// ZADATAK:
//
// Deklarirana je klasa Point2D kojom se opisuje polozaj tocke 
// u 2D prostoru (x,y). Koristeci klasu i pravila nasljedjivanja 
// definirajte klasu Point4D, pomocu koje se opisuje polozaj 
// tocke u trodimenzionalnom prostoru sa vremenom (x, y, z, t).
// Vrijeme ne smije biti negativan broj.
// Dodatne varijable neka budu tipa double.
// Definirajte:
//  a)	konstruktor, kojim se dodatne varijable inicijaliziraju na nulu
//  b)	operator !=
//  c)	operator >>
// U main funkciji napišite primjer korištenja klase Point4D.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte nista iznad ove linije!

// ukljucite potrebne biblioteke...
#include <iostream>
using namespace std;
class Point2D {
public:
	Point2D() { m_x = m_y = 0.0; }
	double m_x, m_y;
};

class Point4D : public Point2D {
private:
	int m_t;
public:
	int m_z;
	Point4D();
	void setT(int t);
	int getT();
	friend bool operator!=(Point4D& p1, Point4D& p2);
	friend istream& operator >> (istream& os, Point4D& p);
};

Point4D::Point4D() {
	m_z = 0;
	m_t = 0;
}

void Point4D::setT(int t) {
	if (t >= 0) {
		m_t = t;
	}
	else {
		m_t = 0;
	}
}

int Point4D::getT() {
	return m_t;
}

bool operator!=(Point4D& p1, Point4D& p2) {
	if (p1.m_t == p2.m_t && p1.m_x == p2.m_x && p1.m_y == p2.m_y && p1.m_z == p2.m_z) {
		return false;
	}
	else {
		return true;
	}
}

istream& operator >> (istream& os, Point4D& p) {
	int tx, ty, tz, tt;
	if (os >> tx >> ty >> tz >> tt) {
		p.m_x = tx;
		p.m_y = ty;
		p.m_z = tz;
		p.m_t = tt;
	}
	return os;
}



int main() {
	Point4D p;
	cin >> p;
	cout << "Koordinate tocke: (" << p.m_x << ", " << p.m_y << ", " << p.m_z << ", " << p.getT() << ")" << endl;
	return 0;
}
