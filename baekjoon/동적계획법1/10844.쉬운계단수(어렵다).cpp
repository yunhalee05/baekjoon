#include <iostream>
#include <vector>
#include <algorithm>

int d[101][10];

using namespace std;

int main()
{
	int n;
	long long sum = 0;
	cin >> n;

	for (int i = 1; i <= 9; i++)
	{
		d[1][i] = 1;
	}
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				d[i][j] = (d[i - 1][j + 1]) % 1000000000;
			}
			else if (j == 9)
			{
				d[i][j] = (d[i - 1][j - 1]) % 1000000000;
			}
			else
			{
				d[i][j] = ((d[i - 1][j - 1]) % 1000000000 + (d[i - 1][j + 1] % 1000000000)) % 1000000000;
			}

		}
	}

	for (int i = 0; i < 10; i++)
	{
		sum = (sum + d[n][i]) % 1000000000;
	}
	cout << sum % 1000000000 << endl;

	return 0;
}