#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int T;
	long long x, y;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> x >> y;
		long long dis = y - x;
		long long n = 0;
		while (1)
		{
			n++;
			if ((dis > n * n - n) && (dis <= n * n + n))
			{
				break;
			}
		}
		if (dis <= n * n)
		{
			cout << n * 2 - 1 << endl;
		}
		else
		{
			cout << n * 2 << endl;
		}

	}
}