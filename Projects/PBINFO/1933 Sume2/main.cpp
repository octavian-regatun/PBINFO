// #(nr) (nume problema)

#include "pch.h"
#include "fstream"
#include "iostream"

using namespace std;

ifstream fin("sume2.in");
ofstream fout("sume2.out");

int a[100001];
int main()
{
	struct pair {
		int i;
		int j;
	}pereche;

	int n;

	fin >> n;

	for (int i = 1; i <= n; i++) {
		fin >> a[i];
	}

	int m;

	fin >> m;

	int suma = 0;

	for (int i = 1; i <= m; i++) {
		fin >> pereche.i >> pereche.j;
		suma = 0;
		for (int i = pereche.i; i <= pereche.j; i++) {
			suma = suma + a[i];
		}

		fout << suma << endl;
	}



	return 0;
}