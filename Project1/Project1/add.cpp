#include "head.h"
#include "add.h"
void add(int n, int m, int x, int **p) {
	cout << "����Ҫ���ӵıߵ�����·�����ź�Ȩֵ" << endl;
	cin >> n >> m >> x;
	p[n - 1][m - 1] = p[m - 1][n - 1] = x;
}

void add2(int**p) {
	cout << "�����·����������·����֮���Ȩֵ" << endl;
	for (int i = 0; i <= a; i++) {
		cin >> p[a][i];
		p[i][a] = p[a][i];
	}
	a++;
}