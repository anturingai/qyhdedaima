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
	p = new int*[a + 2]; //������
	for (int i = 0; i < a + 2; i++)
		p[i] = new int[a + 2]; //������

	cout << "����������:";
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> p[i][j];
		}
	}
	cout << "��ѡ��Ҫִ�еĹ���" << endl;
	cout << "1:��ʾ·�ɱ�" << endl;
	cout << "2:���ٱ�" << endl;
	cout << "3:���ٽڵ�" << endl;
	cout << "4:���ӱ�" << endl;
	cout << "5:���ӽڵ�" << endl;
	while (cin >> y) {
		if (y == 1) {
			cout << "��������Ҫ��ʾ��·�ɱ��·������" << endl;
			while (cin >> start && start) {
				start--;
				cout << "Ŀ��·����" << "\t" << "���·��" << "\t" << "��һ����ַ" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else if (y == 2) {
			sub2(n, m, p);
			while (cin >> start && start) {
				start--;
				cout << "Ŀ��·����" << "\t" << "���·��" << "\t" << "��һ����ַ" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else if (y == 3) {
			sub(a, p);
			while (cin >> start && start) {
				start--;
				cout << "Ŀ��·����" << "\t" << "���·��" << "\t" << "��һ����ַ" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else if (y == 4) {
			add(n, m, x, p);
			while (cin >> start && start) {
				start--;
				cout << "Ŀ��·����" << "\t" << "���·��" << "\t" << "��һ����ַ" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}
		}
		else {
			add2(p);
			while (cin >> start && start) {
				start--;
				cout << "Ŀ��·����" << "\t" << "���·��" << "\t" << "��һ����ַ" << endl;
				SHORTEST_PATHS(start, a, p, DIST, S, word);
				print(a, word, DIST, p);
			}

		}
	}
}
