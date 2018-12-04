#include "print.h"
#include "head.h"
void print(int a, int word[], int DIST[], int **p) {
	for (int i = 0; i < a; i++) {
		if (DIST[i] != 0 && p[i][i] != 100) {
			cout << i + 1 << "\t\t";
			cout << DIST[i] << "\t\t";
			cout << word[i] + 1 << "\t\t";
			cout << endl;
		}
	}
}