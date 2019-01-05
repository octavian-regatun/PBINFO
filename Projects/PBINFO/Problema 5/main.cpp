// Problema 17 - Fisa Gradinariu (TEMA)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

// ifstream fin("date.in");
// ofstream fout("date.out");
int x,k, v[101], index,aux1,aux2,nr1,nr2;
int main()
{
	cin >> k;
	cin >> x;
	while (x != 0) {
		v[index] = x;
		index++;
		cin >> x;
	}
	for (int i = 1; i < index; i++) {
		aux1 = v[i];
		aux2 = v[i+1];
		aux1 = pow(v[i], 2);
		aux2 = pow(v[i+1], 2);
		while (aux1 != 0) {
			if (aux1 % 10 == k)
				nr1++;
		}

		while (aux2 != 0) {
			if (aux2 % 10 == k)
				nr2++;
		}
		if (nr1 == nr2)
			cout << v[i] << " " << v[i + 1] << endl;
	}


	return 0;
}