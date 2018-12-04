#include "head.h"
#include "add.h"
void add(int n, int m, int x, int **p) {
	cout << "输入要增加的边的两端路由器号和权值" << endl;
	cin >> n >> m >> x;
	p[n - 1][m - 1] = p[m - 1][n - 1] = x;
}

void add2(int**p) {
	cout << "输入该路由器与其他路由器之间的权值" << endl;
	for (int i = 0; i <= a; i++) {
		cin >> p[a][i];
		p[i][a] = p[a][i];
	}
	a++;
}