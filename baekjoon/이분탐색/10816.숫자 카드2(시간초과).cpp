#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	map<int, int>a;

	int n;
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		a[tmp]++;
	}

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		cout << a[tmp] << " ";

	}
	return 0;
}
