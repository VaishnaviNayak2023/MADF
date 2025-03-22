#include <iostream>
#include <conio.h>
#include <cstring>
#define n 7
#define inf 1000
using namespace std;
int g[7][7] = {
{ 0, 6, 5, 5, inf, inf, inf },
{ inf, 0, inf, inf, -1, inf, inf },
{ inf, inf, 0, inf, 1, inf, inf },
{ inf, inf, inf, 0, inf, -1, inf },
{ inf, inf, inf, inf, 0, inf, 3 },
{ inf, inf, inf, inf, inf, 0, 3 },
{ inf, inf, inf, inf, inf, inf, 0 }
};
void bellmanford()
{
	int i;
	int x;
	int dist[n], m[n];
	for (i = 0; i < n; i++) {
		dist[i] = g[0][i];
		g[0][i] = 0;
	}
	for (i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			m[j] = dist[j] + g[0][j];
		}
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (k == 0)
					continue;
				if (m[j] > g[k][j] + dist[k])
					m[j] = g[k][j] + dist[k];
			}
		}
		for (int l = 0; l < n; l++)
			dist[l] = m[l];
	}
	cout << "Single-source shortest path: Bellman Ford algorithm\n";
	cout << "Distance: " << endl;
	for (int l = 0; l < n; l++) {
		if (dist[l] != inf)
			cout << "1 - " << l + 1 << " :\t" << dist[l] << "\n";
		else
			cout << "Infinity";
	}
}
void main() {
	bellmanford();
	_getch();
}