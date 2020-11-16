#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>
#include <cstring>

using namespace std;

vector<vector<int>>adj;
vector<bool> visited;
vector<bool> visited2;//DFS에서 체크를 사용해서 다시 초기화 해야한다. 새 bool타입을 만들어주자.

void DFS(int startNode)
{
	visited[startNode] = true;
	printf("%d ", startNode);

	vector<int>::const_iterator next;
	for (next = adj[startNode].begin(); next != adj[startNode].end(); next++)
	{
		if (visited[*next] == false)
		{
			DFS(*next);
		}
	}
}
void BFS(int startNode)
{
	queue<int> q;
	q.push(startNode);
	visited2[startNode] = true;
	while (!q.empty())
	{
		int current = q.front();
		printf("%d ", current);
		q.pop();


		vector<int>::const_iterator next;
		for (next = adj[current].begin(); next != adj[current].end(); next++)
		{
			if (visited2[*next] == false)
			{
				q.push(*next);
				visited2[*next] = true;

			}
		}
	}

}
int main()
{
	int n;
	int m;
	int startNode;
	cin >> n >> m >> startNode;

	adj.resize(n + 1);
	visited.resize(n + 1, false);
	visited2.resize(n + 1, false);


	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	for (int i = 1; i <= n; i++)
	{
		sort(adj[i].begin(), adj[i].end());//문제에서 오름차순이라고 했다. 
	}

	DFS(startNode);
	printf("\n");

	BFS(startNode);

	return 0;


}