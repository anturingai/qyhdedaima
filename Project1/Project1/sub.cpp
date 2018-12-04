#include "sub.h"
#include "head.h"
void sub(int a, int **p) {
	int m;
	cout << "输入删除的点" << endl;
	cin >> m;
	m--;
	for (int i = 0; i < a; i++) {
		p[i][m] = 100;
	}
	for (int i = 0; i < a; i++) {
		p[m][i] = 100;
	}
}

void sub2(int n, int m, int **p) {
	cout << "输入你要删除的边的两端" << endl;
	cin >> m >> n;
	p[m - 1][n - 1] = p[n - 1][m - 1] = 100;
}