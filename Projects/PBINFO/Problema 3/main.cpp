// 19

#include "pch.h"
#include "fstream"
#include "iostream"
#include "cmath"

using namespace std;

// ifstream fin("date.in");
// ofstream fout("date.out");

int n, nrCifre, aux, aux2, aux3;
int main()
{
	cin >> n;

	int aux = n;

	while (n) {
		nrCifre++;
		n = n / 10;
	}
	if (nrCifre % 2 == 1) {
		aux2 = aux % (int)pow(10, (nrCifre / 2));
		aux3 = aux / pow(10, (nrCifre / 2)) / 10;
		cout << aux3 * pow(10, nrCifre / 2) + aux2;
	}
	else {
		aux2 = aux % (int)pow(10, (nrCifre / 2 - 1));
		aux3 = aux / pow(10, (nrCifre / 2 )) / 10;
		cout << aux3 * pow(10, nrCifre / 2 -1) + aux2;
	}
	return 0;
}