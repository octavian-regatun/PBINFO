// #(nr) (nume problema)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

// ifstream fin("date.in");
// ofstream fout("date.out");

int main()
{
	int x, y;

	cin >> x >> y;

	int cifraComuna = 0;
	int aux = y;

	while(x){
		while (y) {
			if (x % 10 == y % 10) {
				cifraComuna = 1;
				break;
			}
			y /= 10;
		}
		y = aux;
		x /= 10;
	}

	cout << cifraComuna;

	return 0;
}