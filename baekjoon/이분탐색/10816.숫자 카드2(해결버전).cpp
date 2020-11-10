#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n, 0);

	int tmp;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());

	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> tmp;
		cout << upper_bound(a.begin(), a.end(), tmp) - lower_bound(a.begin(), a.end(), tmp) << " ";

	}
	return 0;
}