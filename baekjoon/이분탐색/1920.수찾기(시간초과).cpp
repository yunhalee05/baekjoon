#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	int n;
	cin >> n;
	vector <int> arr;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		arr.push_back(a);
	}

	sort(arr.begin(), arr.end());

	int m;
	cin >> m;

	for (int i = 0; i < m; i++)
	{

		int num;
		cin >> num;
		bool flag = false;
		int mid = 0;
		int lt = 0;
		int rt = n - 1;
		while (lt <= rt)
		{
			mid = (lt + rt) / 2;
			if (arr.at(mid) > num)
			{
				rt = mid - 1;
			}
			else if (arr.at(mid) < num)
			{
				lt = mid + 1;
			}
			else
			{
				flag = true;
			}

		}
		cout << flag ? "1\n" : "0\n";
	}
	return 0;
}