#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 1e9


using namespace std;



int n, m;
int graph[401][401];



int main() {

	cin >> n >> m;
	for (int i = 0; i < 401; i++) {
		fill(graph[i], graph[i] + 401, INF);
	}

	//������ ä���ֱ�
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		graph[a][b] = c;
	}

	//�÷��̵� ����
	for (int k = 1; k < n + 1; k++) {
		for (int a = 1; a < n + 1; a++) {
			for (int b = 1; b < n + 1; b++) {
				graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b]);
			}
		}
	}

	int distance = INF;
	//�����ڸ����� �����ڸ��� ���ƿ��� ���� �ּڰ�ã�Ƴ���
	for (int i = 1; i < n + 1; i++) {

		distance = min(distance, graph[i][i]);

	}

	if (distance != INF) cout << distance << endl;
	else cout << "-1" << endl;

	return 0;


}