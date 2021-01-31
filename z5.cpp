// Bilandžic Marina	49-2015	B320_1	505212478334401 3
//
// ZADATAK:
//
//
// Napišite funkciju, kojom se iz jednog vektora V formiraju dva vektora: 
// V1 treba sadržavati neparne, a vektor V2 parne elemente vektora.
// U funkciji vektore V1 i V2 sortirajte pomocu STL funkcije sort().
// Napišite main() funkciju sa primjerom korištenja funkcije Razdijeli_vektor().
// 
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
// Ne mijenjajte ništa iznad ove linije!

// ukljucite potrebne biblioteke...
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef vector<int> Vec;

void Razdijeli_vektor(Vec& V, Vec& V1, Vec& V2) {
	vector<int>::iterator iter;
	for (iter = V.begin(); iter != V.end(); ++iter) {
		if (*iter % 2 == 0) {
			V1.push_back(*iter);
		}
		else {
			V2.push_back(*iter);
		}
	}
}

int main() {
	Vec v, v1, v2;
	int i, val;
	v = { 1,2,3,4,5,6,7,8,9 };
	Razdijeli_vektor(v, v1, v2);
	for (i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;
	for (i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;
	for (i = 0; i < v2.size(); i++) {
		cout << v2[i] << " ";
	}
	cout << endl;
	return 0;
}


//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef vector<int> Vec;
//
//void Razdijeli_vektor(Vec& V, Vec& V1, Vec& V2) {
//	vector<int>::iterator iter;
//	for (iter = V.begin(); iter != V.end(); ++iter) {
//		if (*iter % 2 == 1)
//			V1.push_back(*iter);
//		else
//			V2.push_back(*iter);
//	}
//	sort(V1.begin(), V1.end());
//	sort(V2.begin(), V2.end());
//}
//
//int main() {
//	Vec a = { 1,5,3,44,5,6,7,4,3,5,66,7 };
//	Vec b, c;
//	Razdijeli_vektor(a, b, c);
//
//	return 0;
//}
