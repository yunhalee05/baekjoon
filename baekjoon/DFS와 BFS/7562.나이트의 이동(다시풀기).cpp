#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 1e9


using namespace std;

int n, i;
int dx[8] = { -2, -1, 1, 2, 2, 1, -1, -2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };
int graph[301][301] = { 0 };
int visited[301][301] = { 0 };
queue <pair<int, int>> q;

void bfs(int startx, int starty, int goalx, int goaly) {
	int distance;
	visited[startx][starty] = 1;
	q.push(make_pair(startx, starty));

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;

		if (x == goalx && y == goaly) distance = graph[x][y];
		q.pop();

		for (int i = 0; i < 8; i++) {

			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= i || ny >= i || nx < 0 || ny < 0) continue;

			if (visited[nx][ny] == 0) {
				q.push(make_pair(nx, ny));
				graph[nx][ny] = graph[x][y] + 1;
				visited[nx][ny] = 1;
			}
		}
	}

	cout << distance << endl;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int x, y, gx, gy;
		cin >> i;
		cin >> x >> y;
		cin >> gx >> gy;
		bfs(x, y, gx, gy);
		memset(graph, 0, sizeof(graph));
		memset(visited, 0, sizeof(visited));

	}

	return 0;

}