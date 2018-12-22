//18

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

// ifstream fin("date.in");
// ofstream fout("date.out");

int index = 1, v[101], suma1, suma2, aux1, aux2;
int main()
{
	int x;
	cin >> x;
	while (x != 0) {
		v[index] = x;
		index++;
		cin >> x;
	}

	for (int i = 1; i < index; i++) {
		suma1 = 0;
		suma2 = 0;
		aux1 = v[i];
		aux2 = v[i + 1];
		while (aux1) {
			suma1 = suma1 + aux1 % 10;
			aux1 = aux1 / 10;
		}
		while (aux2) {
			suma2 = suma2 + aux2 % 10;
			aux2 = aux2 / 10;
		}

		if (suma1 % 2 == 0 && suma2 % 2 == 1) {
			cout << v[i] << " " << v[i + 1] << endl;
		}
	}

	return 0;
}