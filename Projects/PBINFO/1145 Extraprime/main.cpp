// #(nr) (nume problema)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

ifstream fin("extraprime.in");
ofstream fout("extraprime.out");

int a, b, x, min, max, v[101], index, nr;

int oglindit(int nr) {
	int ogl = 0;
	while (nr) {
		ogl = ogl * 10 + nr % 10;
		nr /= 10;
	}
	return ogl;
}

int main()
{
	fin >> x;

	index = 1;

	while (x) {
		v[index] = x % 10;
		x /= 10;
		index++;
	}

	for (int i = 1; i < index; i++) {
		nr = nr * 10 + v[i];
	}


	fout << oglindit(nr);
	return 0;
}