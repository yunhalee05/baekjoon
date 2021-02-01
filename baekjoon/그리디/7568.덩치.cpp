#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 1e9


using namespace std;

int main() {

	int n, x, y;
	vector<pair<int, int>> People;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		People.push_back(make_pair(x, y));
	}

	for (int i = 0; i < People.size(); i++) {
		int cnt = 1;
		for (int j = 0; j < People.size(); j++) {
			if (i != j) {
				if (People[j].first > People[i].first && People[j].second > People[i].second) cnt++;
			}
		}
		cout << cnt << " ";
	}

	return 0;
}