#include "result.h"
#include "print.h"
#include "name.h"
#include "head.h"
#include "sub.h"
#include "add.h"
int a = 9;
void main()
{
	cout << "shenzhiwei"<<endl;
	p = new int*[a + 2]; //开辟行
	for (int i = 0; i < a + 2; i++)
		p[i] = new int[a + 2]; //开辟列

	cout << "请输入数据:";
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> p[i][j];
		}
	}
	cout << "请选择要执行的功能" << endl;
	cout << "1:显示路由表" << endl;
	cout << "2:减少边" << endl;
	cout << "3:减少节点" << endl;
	cout << "4:增加边" << endl;
	cout << "5:增加节点" << endl;
	while (cin >> y) {
		if (y == 1) {
			cout << "请输入你要显示的路由表的路由器号" << endl;
			while (cin >> start && start) {
				start--;
				cout << "目的路由器" << "\t" << "最短路径" << "\t" << "下一跳地址" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else if (y == 2) {
			sub2(n, m, p);
			while (cin >> start && start) {
				start--;
				cout << "目的路由器" << "\t" << "最短路径" << "\t" << "下一跳地址" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else if (y == 3) {
			sub(a, p);
			while (cin >> start && start) {
				start--;
				cout << "目的路由器" << "\t" << "最短路径" << "\t" << "下一跳地址" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else if (y == 4) {
			add(n, m, x, p);
			while (cin >> start && start) {
				start--;
				cout << "目的路由器" << "\t" << "最短路径" << "\t" << "下一跳地址" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else {
			add2(p);
			while (cin >> start && start) {
				start--;
				cout << "目的路由器" << "\t" << "最短路径" << "\t" << "下一跳地址" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}

		}
	}
}
