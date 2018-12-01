// #(nr) (nume problema)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

ifstream fin("extraprime.in");
ofstream fout("extraprime.out");

int a, b, v[501];

int oglindit(int nr) {
	int ogl = 0;
	while (nr) {
		ogl = ogl * 10 + nr % 10;
		nr /= 10;
	}
	return ogl;
}

void golesteVector(int numarElemente) {
	for (int i = 1; i <= numarElemente; i++) {
		v[i] = 0;
	}
}

int main()
{
	fin >> a >> b;

	for (int nr = a; nr <= b; nr++) {
		int index = 1;
		int aux = nr;
		int uc = aux % 10;
		while (uc % 2 == 1) {
			v[index] = uc;
			aux /= 10;
			uc = aux % 10;
			index++;
		}
		golesteVector(index);
	}

	return 0;
}