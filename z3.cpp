// Andric Martin	849-2018	B320_1	306408436385374 1
//
// ZADATAK:
//
//
// Deklarirana je klasa Circle, kojom se bilježi radijus kružnice.
// Napišite klasu ExtendedCircle koja pored radijusa kružnice 
// sadrži podatak o boji kružnice m_color tipa int i 
// debljini m_thickness tipa int. Ove varijable neka budu
// privatne, a njihova vrijednost od 0 do 255.
// U definiranju klase ExtendedCircle obvezno koristite mehanizam 
// nasljedjivanja, tako da klasa ExtendedCircle nasljedjuje klasu Circle.
// Za klasu ExtendedCircle definirajte:
//  a) default konstruktor, koji postavlja clanove na nulu
//  b) operator = 
//  c) pristupne funkcije za nove clanove.
//
// U main funkciji deklarirajte jedan objekt klase ExtendedCircle i 
// sa tipkovnice ucitajte vrijednosti clanskih varijabli.
// Potom deklarirajte još jedan objekt klase ExtendedCircle
// i iskoristite operator = za postaviti ga na vrijednost prethodnog objekta.
//
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

#include <iostream>
using namespace std;

class Circle {
public:
	Circle() { m_radius = 0; }
	void SetRadius(int r) { if (r >= 0) m_radius = r; };
	int GetRadius() { return m_radius; };

protected:
	int m_radius;
};

class extendedCircle : public Circle {
private:
	int m_color;
	int m_thickness;
public:
	extendedCircle();
	void setColor(int val);
	void setThickness(int val);
	int getColor();
	int getThickness();
	extendedCircle& operator= (const extendedCircle& c1);
};

extendedCircle::extendedCircle() {
	m_color = 0;
	m_thickness = 0;
}

void extendedCircle::setColor(int val) {
	if (val >= 0 && val <= 255) {
		m_color = val;
	}
}

void extendedCircle::setThickness(int val) {
	if (val >= 0 && val <= 255) {
		m_thickness = val;
	}
}

int extendedCircle::getColor() {
	return m_color;
}

int extendedCircle::getThickness() {
	return m_thickness;
}

extendedCircle& extendedCircle::operator= (const extendedCircle& c1) {
	m_color = c1.m_color;
	m_thickness = c1.m_thickness;
	m_radius = c1.m_radius;
	return *this;
}

int main() {
	extendedCircle c, c1;
	int rad, thi, col;
	cout << "Unesite vrijednosti" << endl;
	cin >> rad >> thi >> col;
	c.setColor(col);
	c.SetRadius(rad);
	c.setThickness(thi);
	cout << "rad: " << c.GetRadius() << "col: " << c.getColor() << "thi: " << c.getThickness() << endl;
	c1 = c;
	cout << "rad: " << c1.GetRadius() << "col: " << c1.getColor() << "thi: " << c1.getThickness() << endl;
	return 0;
}

//class ExtendedCircle : public Circle {
//private:
//	int m_color;
//	int m_thickness;
//
//public:
//	ExtendedCircle();
//	void SetColor(int temp);
//	void SetThickness(int temp);
//	int GetColor();
//	int GetThickness();
//	ExtendedCircle& operator=(const ExtendedCircle& temp);
//};
//ExtendedCircle::ExtendedCircle() {
//	m_color = m_thickness = 0;
//}
//ExtendedCircle& ExtendedCircle::operator=(const ExtendedCircle& temp) {
//	m_radius = temp.m_radius;
//	m_color = temp.m_color;
//	m_thickness = temp.m_thickness;
//
//	return *this;
//}
//void ExtendedCircle::SetColor(int temp) {
//	if (temp >= 0 && temp <= 255)
//		m_color = temp;
//}
//void ExtendedCircle::SetThickness(int temp) {
//	if (temp >= 0 && temp <= 255)
//		m_thickness = temp;
//}
//int ExtendedCircle::GetColor() {
//	return m_color;
//}
//int ExtendedCircle::GetThickness() {
//	return m_thickness;
//}
//
//int main() {
//	ExtendedCircle a;
//	int col, thick;
//
//	cin >> col >> thick;
//	a.SetColor(col);
//	a.SetThickness(thick);
//	ExtendedCircle b;
//	b = a;
//	return 0;
//}
