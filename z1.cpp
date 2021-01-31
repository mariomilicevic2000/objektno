#include<iostream>
#include<fstream>
// Barac Zrinka	130-2017	B320_1	356433402350234 2
//
// ZADATAK:
//
//
// Deklarirana je klasa Niz, kojom se deklarira dinamicki niz cijelih brojeva.
// Koristeci ovu deklaraciju :
//		a)	napisite konstruktor, kojim se ujedno alocira dinamicki niz m_array 
//			i svi elementi postavljaju na nulu.
//		b)  napišite destruktor koji dealocira niz
//		c)	definirajte funkcije SetAt() i GetAt().
//		d)	definirajte operator= za klasu Niz.
//		e)  definirajte operator==
//
// U funkciji main() upotrebite klasu i sve njene funkcije i operatore.
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// ukljucite potrebne biblioteke...

class Niz {
public:
	Niz(int size = 5);
	~Niz();
	void SetAt(int index, int val);
	int GetAt(int index);
	friend bool operator == (const Niz& n1, const Niz& n2);
	Niz& operator= (const Niz& n1);
private:
	int* m_array;
	int m_size;
};

Niz::Niz(int size) {
	int i;
	m_size = size;
	this->m_array = new int[size];
	for (i = 0; i < size; i++) {
		m_array[i] = 0;
	}
}

Niz::~Niz() {
	delete[] m_array;
}

void Niz::SetAt(int index, int val) {
	m_array[index] = val;
}

int Niz::GetAt(int index) {
	return m_array[index];
}

bool operator == (const Niz& n1, const Niz& n2){
	int i;
	if (n1.m_size != n2.m_size)
		return false;
	for (i = 0; i < n1.m_size; i++) {
		if (n1.m_array[i] != n2.m_array[i]) {
			return false;
		}
	}
	return true;
}

Niz& Niz::operator= (const Niz& n1) {
	m_size = n1.m_size;
	for (int i = 0; i < m_size; i++) {
		m_array[i] = n1.m_array[i];
	}
	return *this;
}

int main() {

	return 0;
}

//#include <iostream>
//using namespace std;
//class Niz {
//public:
//	Niz(int size = 5);
//	~Niz();
//	void SetAt(int index, int val);
//	int GetAt(int index);
//	friend bool operator==(Niz&, Niz&);
//	Niz& operator=(Niz& n1);
//private:
//	int* m_array;
//	int m_size;
//};
//
//Niz::Niz(int size)
//{
//	m_size = size;
//	this->m_array = new int[size];
//
//	for (int i = 0; i < size; i++)
//		m_array[i] = 0;
//}
//
//Niz::~Niz()
//{
//	delete[] m_array;
//}
//
//void Niz::SetAt(int index, int val)
//{
//	if (index >= 0 && index < m_size)
//		m_array[index] = val;
//}
//
//int Niz::GetAt(int index)
//{
//	if (index >= 0 && index < m_size)
//		return m_array[index];
//}
//
//bool operator == (Niz& n1, Niz&n2) {
//	if (n1.m_size != n2.m_size)
//		return false;
//
//	for (int i = 0; i < n1.m_size; i++)
//		if (n1.m_array[i] != n2.m_array[i])
//			return false;
//
//	return true;
//}
//
//Niz& Niz::operator = (Niz& n1)
//{
//	this->m_size = n1.m_size;
//	this->m_array = new int[m_size];
//
//	for (int i = 0; i < m_size; i++)
//		m_array[i] = n1.m_array[i];
//
//	return *this;
//}
//
//int main() {
//	Niz a(5);
//	Niz b(5);
//
//	a.SetAt(0, 10);
//	cout << (a == b) << endl;
//	a = b;
//	return 0;
//}
