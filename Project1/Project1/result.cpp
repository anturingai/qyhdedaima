#include"result.h"
void SHORTEST_PATHS(int v, int a, int **p, int DIST[], bool S[], int word[])
{
	int index = 0;
	int temp = 0; int u = 0;
	int k = 1;
	for (int i = 0; i<a; i++)
	{
		S[i] = 0;
		DIST[i] = p[v][i];
		word[i] = 0;
	}
	S[v] = 1;
	DIST[v] = 0;
	word[v] = v;
	for (int num = 1; num <= a; num++)
	{
		int min = 1001;
		for (int i = 0; i < a; i++) {
			if (S[i] != 1 && DIST[i] < min)
			{
				min = DIST[i];
				k = i;
			}
		}

		S[k] = 1;
		temp = k;

		for (int i = 0; i < a; i++)
		{
			if (word[k] == 0)word[k] = k;
			if (S[i] != 1) {
				u = ((DIST[k] + p[k][i]) < DIST[i]) ? (DIST[k] + p[k][i]) : DIST[i];
				if (DIST[i] >= (DIST[k] + p[k][i])) {
					word[i] = k;
					while (word[i] != word[k]) {
						word[i] = word[k];
						k = word[k];
					}
					k = temp;
				}
				DIST[i] = u;
			}
		}
	}
}