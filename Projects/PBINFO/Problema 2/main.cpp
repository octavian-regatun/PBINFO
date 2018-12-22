// problema 20

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

ifstream fin("date.in");
ofstream fout("date.out");

int n, x, v[10], uc, suma, aux;
bool OK;
int main()
{
	fin >> n;

	for (int i = 1; i <= n; i++) {
		fin >> x;
		OK = true;
		aux = x;
		while (x) {
			uc = x % 10;
			v[uc]++;
			x = x / 10;
		}
		for (int i = 0; i <= 9; i++) {
			if (i % 2 == 0 && v[i] > 0) {
				OK = false;
				break;
			}
			else if (i % 2 == 1 && v[i] > 1) {
				OK = false;
				break;
			}
		}
		if (OK == true) {
			suma = suma + aux;
		}

		// golim vectorul

		for (int i = 0; i <= 9; i++) {
			v[i] = 0;
		}
	}

	fout << suma;

	return 0;
}