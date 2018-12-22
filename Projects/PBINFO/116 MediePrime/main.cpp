// #(nr) (nume problema)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

// ifstream fin("date.in");
// ofstream fout("date.out");

bool estePrim(int nr) {
	bool prim = true;

	if (nr == 1) {
		return false;
	}

	for (int d = 2; d*d <= nr; d++) {
		if (nr%d == 0) {
			prim = false;
			break;
		}
	}
	return prim;
}
int main()
{
	int n;
	cin >> n;

	float medie=0;
	int nrPrime=0;

	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		if (estePrim(x)) {
			nrPrime++;
			medie += x;
		}
	}

	medie = medie / nrPrime;

	cout << medie;

	return 0;
}