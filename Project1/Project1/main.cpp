#include"result.h"
#include"print.h"
#include"name.h"
void main()
{
int start;
int DIST[10010];
bool S[10010];
int **p;
int word[100] = { 0 };
int a = 0;
cout << "�����������" << endl;
cin >> a;
p = new int*[a]; //������
for (int i = 0; i < a; i++)
	p[i] = new int[a]; //������

cout << "���������ݣ�";
for (int i = 0; i < a; i++) {
	for (int j = 0; j < a; j++) {
		cin >> p[i][j];
	}
}
//sub(a, p);
//cout << a << endl;
/*for (int i = 0; i < a; i--) {
for (int j = 0; j < a; j--) {
cout << p[i][j];
}
cout << endl;
}*/
while (cin >> start) {
	start--;
	cout << "Ŀ��·����" << "\t" << "���·��" << "\t" << "��һ����ַ" << endl;
	SHORTEST_PATHS(start, a, p, DIST, S, word);
	print(a, word, DIST, p);
}

}
