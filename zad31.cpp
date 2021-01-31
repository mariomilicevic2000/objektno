#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// ZADATAK:
//
//
// Napisati funkciju, kojom se iz dva vektora cijelih brojeva V1 i V2 
// formira jedan vector V, koja treba sadržavati sve parne brojeve iz vectora V1 i V2.
// U vectoru V brojevi trebaju biti sortirani. Za vector koristite STL biblioteku;
// Za sortiranje koristite funkciju iz STL biblioteke algoritama. 
// U main funkciji sami napravite primjer upotrebe funkcije.
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// uključite potrebne biblioteke...

vector<int> Formiraj_vector(vector<int>& v1, vector<int>& v2) {
	int i;
	vector<int> v;

	for (i = 0; i < v1.size(); i++) {
		if (v1[i] % 2 == 0) {
			v.push_back(v1[i]);
		}
	}

	for (i = 0; i < v2.size(); i++) {
		if (v2[i] % 2 == 0) {
			v.push_back(v2[i]);
		}
	}

	return v;
}

int main() {
	vector<int> v1;
	vector<int> v2;
	vector<int> v;
	int i;

	v1.resize(5);
	v2.resize(5);

	for (i = 0; i < v1.size(); i++) {
		cout << "Upisi vrijednost" << endl;
		cin >> v1[i]; 
	}

	for (i = 0; i < v2.size(); i++) {
		cout << "Upisi vrijednost" << endl;
		cin >> v2[i];
	}

	/*for (i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}

	for (i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}*/

	v = Formiraj_vector(v1, v2);
	sort(v.begin(), v.end());

	for (i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
}
