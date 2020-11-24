#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cmath>

using namespace std;

int main()
{
	long long n, m;
	cin >> n >> m;


	vector<long long> tree(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> tree[i];
	}

	sort(tree.begin(), tree.end());

	long long lt = 0;
	long long rt = tree[n - 1];
	long long max = 0;

	while (lt <= rt)
	{
		long long mid = (lt + rt) / 2;
		long long len = 0;

		for (long long i = 0; i < n; i++)
		{
			if (tree[i] > mid)
			{
				len += tree[i] - mid;//������� ������������ �̷��� ���ش�. 
			}
		}

		if (len >= m)
		{
			lt = mid + 1;
			if (mid > max)
			{
				max = mid;
			}
		}
		else
		{
			rt = mid - 1;
		}
	}
	cout << max;

}

/*
ó���� �ߴ� ���(�߸� �����ߴ�, ���� ���б�!)
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cmath>

using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;


	vector<int> tree(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tree[i];
	}

	sort(tree.begin(), tree.end());

	int lt = 1;
	int rt = tree[n - 1];
	int min = 2147000000;
	int answer = -1;

	while (lt <= rt)
	{
		int mid = (lt + rt) / 2;
		int len = 0;

		for (int i = 0; i < n; i++)
		{
			if (tree[i] < mid)
			{
				continue;
			}
			else if (tree[i] == mid)
			{
				len += tree[i];
			}
			else
			{
				len += tree[i] - mid;
			}
		}

		if (len >= m)
		{
			lt = mid + 1;
			if (len < min)
			{
				min = len;
				answer = mid;
			}
		}
		else
		{
			rt = mid - 1;
		}
	}
	cout << answer;

}*/