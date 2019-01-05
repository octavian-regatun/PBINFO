// Problema 6 - Fisa Gradinariu (TEMA)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int a[9], b[9], c[9];

void golesteVectori() {
	for (int i = 0; i <= 9; i++) {
		a[i] = 0;
		b[i] = 0;
		c[i] = 0;
	}
}

int main()
{
	int n;

	fin >> n;

	long long patrat, cub;
	int ultimaCifra, nrCifreComune = 0, nr;

	for (int i = n; i >= 1; i--) {
		nr = i;
		patrat = i * i;
		cub = i * i * i;

		while (patrat) {
			ultimaCifra = patrat % 10;
			patrat /= 10;
			a[ultimaCifra]++;
		}
		while (cub) {
			ultimaCifra = cub % 10;
			cub /= 10;
			b[ultimaCifra]++;
		}

		for (int i = 0; i <= 9; i++) {
			if (a[i] >= 1 && b[i] >= 1) {
				nrCifreComune++;
				c[i]++;
			}
		}

		if (nrCifreComune >= 1) {
			fout << "Numarul este: " << nr << endl;
			fout << "Numarul de cifre comune: " << nrCifreComune << endl;
			fout << "Cifrele comune sunt: ";
			for (int i = 0; i <= 9; i++) {
				if (c[i] == 1) {
					fout << i << " ";
				}
			}
			fout << endl;
		}

		golesteVectori();
		nrCifreComune = 0;
	}

	return 0;
}