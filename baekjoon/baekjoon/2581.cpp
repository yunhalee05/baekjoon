#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int M;
	int N;
	cin >> M >> N;
	int min = 10000;
	int sum = 0;
	int count = 0;


	for (int k = M; k <= N; k++)
	{
		int check = 0;
		if (k == 1)
			continue;
		else if (k == 2)
		{
			sum += k;
			min = k;
			continue;
		}

		else if (k >= 3)
		{
			for (int i = 2; i < k; i++)
			{
				if ((k % i == 0))
				{
					check = 1;
					continue;
				}
			}

			if (check == 0)
			{
				sum += k;
				if (min > k)
					min = k;
			}
		}
	}
	if (sum == 0)
		cout << -1 << endl;

	if (sum != 0)
	{
		cout << sum << endl;
		cout << min << endl;
	}

}