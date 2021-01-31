#include <iostream>
#include <fstream>
#include <ctype.h>
using namespace std;
// Bilandžic Marina	49-2015	B320_1	505212478334401 4
//
// ZADATAK:
//
//
// Napišite program kojim se sadržaj jedne tekstualne datoteke 
// kopira u drugu, na nacin da se sva pocetna slova rijeci kopiraju kao 
// velika slova. Ostali znakovi se ne mijenjaju. 
// Evo primjera originalne datoteke (lijevo) i kopirane datoteke (desno)

// Danas je petak 1.2.2019.						Danas Je Petak 1.2.2019. 
// Dolazi DRUGI kolokvij.						Dolazi DRUGI Kolokvij.
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// ukljucite potrebne biblioteke...

int main() {
	ifstream infile;
	ofstream outfile;
	infile.open("infile.txt");
	outfile.open("outfile.txt");
	char c;
	infile.get(c);
	while (!infile.eof()) {
		if (c == ' ' || c == '\n') {
			outfile << c;
			infile.get(c);
			c = toupper(c);
			outfile << c;
			infile.get(c);
		}
		else {
			outfile << c;
			infile.get(c);
		}
	}
	infile.close();
	outfile.close();
	
	return 0;
}


//#include <iostream>
//#include <fstream>
//#include <ctype.h>
//using namespace std;
//
//int main() {
//	ifstream ulaz("ulaz.txt");
//	ofstream izlaz("izlaz.txt");
//	char c;
//	ulaz.get(c);
//	while (!ulaz.eof()) {
//		if (c == ' ' || c == '\n') {
//			izlaz << c;
//			ulaz.get(c);
//			c = toupper(c);
//			izlaz << c;
//			ulaz.get(c);
//		}
//		else {
//			izlaz << c;
//			ulaz.get(c);
//		}
//	}
//	ulaz.close();
//	izlaz.close();
//	return 0;
//}
