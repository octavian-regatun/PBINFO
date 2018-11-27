// schimba prima cifra cu ultima cifra

#include "pch.h"
#include <iostream>

using namespace std;

int n, pc, uc, aux, ogl;
int main()
{
	cin >> n;
	aux = n;
	uc = n % 10;
	n /= 10;
	while (n > 9)
	{
		n /= 10;
	}

	pc = n;
	aux = (aux / 10) * 10 + pc;

	while (aux) {
		ogl = ogl * 10 + aux % 10;
		aux /= 10;
	}

	ogl = (ogl / 10) * 10 + uc;

	while (ogl) {
		cout << ogl % 10;
		ogl /= 10;
	}

	return 0;
}
