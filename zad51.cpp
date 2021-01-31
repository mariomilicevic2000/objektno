#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ZADATAK:
//
//
// Napišite program kojim se analizira sadržaj neke tekstualne datoteke. Program izvještava: 
// a)	koliko je znakova
// b)	koliko je riječi
// c)	koliko je redaka teksta
//
// zapisano u toj datoteci.
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

int main() {
	fstream myfile;
	myfile.open("tfile.txt");
	int charCount = 0;
	int wordCount = 1;
	int lineCount = 0;
	char c;
	string unused;
	while (myfile.get(c)) {
		charCount++;
		if (c == ' ' || c == '\n' || c == '\t') {
			wordCount++;
		}
	}
	/*while (myfile.getline(c)) {
		lineCount++;
	}*/
	myfile.close();
	std::cout << "Broj znakova: " << charCount << endl;
	std::cout << "Broj rijeci: " << wordCount << endl;
	std::cout << "Broj redaka: " << lineCount << endl;
	return 0;
}
