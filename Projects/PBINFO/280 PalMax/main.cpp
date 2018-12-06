// #(nr) (nume problema)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

// ifstream fin("date.in");
// ofstream fout("date.out");

int main()
{
	int n;

	cin >> n;
	int gasit = false;
	int palindromMax =0;
	int nr = 0;
	while (n!=0) {
		bool palindrom = false;
		int aux = n;
		int ogl = 0;
		while (n) {
			ogl = ogl * 10 + n % 10;
			n /= 10;
		}
		if (aux == ogl) {
			palindrom = true;
			gasit = true;
		}
		if (palindrom && aux > palindromMax) {
			palindromMax = aux;
			nr = 1;
		}
		else if (palindrom && aux == palindromMax) {
			nr++;
		}
		cin >> n;
	}

	if (!gasit) {
		cout << "NU EXISTA";
		return 0;
	}

	cout << palindromMax << " " << nr;

	return 0;
}