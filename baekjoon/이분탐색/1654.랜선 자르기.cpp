#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>
#include <cmath>

using namespace std;
int main()
{
	int k, n;
	cin >> k >> n;
	vector<long long> len(k);
	for (int i = 0; i < k; i++)
	{
		cin >> len[i];
	}
	sort(len.begin(), len.end());

	long long lt = 1;
	long long rt = len[k - 1];
	long long  ans = -1;
	while (lt <= rt)
	{
		long long  cnt = 0;
		long long mid = (lt + rt) / 2;

		for (int i = 0; i < k; i++)
		{
			cnt += len[i] / mid;
		}

		if (cnt >= n)
		{
			lt = mid + 1;
			ans = max(ans, mid);
		}
		else
		{
			rt = mid - 1;

		}
	}
	cout << ans;
	return 0;
}