#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 1e9


using namespace std;


int parent[500001];
int n, m;

int find_parent(int parent[500001], int x) {
	if (parent[x] != x) parent[x] = find_parent(parent, parent[x]);
	return parent[x];
}

void union_parent(int parent[500001], int a, int b) {
	a = find_parent(parent, a);
	b = find_parent(parent, b);
	if (a < b)parent[b] = a;
	else parent[a] = b;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i < n + 1; i++) {
		parent[i] = i;
	}
	int cnt = 0;
	bool cycle = false;
	for (int i = 0; i < m; i++)
	{

		int a, b;
		cin >> a >> b;
		cnt++;
		if (find_parent(parent, a) == find_parent(parent, b)) {
			cycle = true;
			break;
		}
		else union_parent(parent, a, b);
	}

	if (cycle) cout << cnt << endl;
	else cout << "0" << endl;


	return 0;

}