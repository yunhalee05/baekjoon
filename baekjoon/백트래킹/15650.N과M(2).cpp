15650
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int a[10];
int ch[10];

void func(int x)
{

	if (x == m)
	{
		bool flag = true;
		for (int i = 0; i < m - 1; i++)
		{
			if (a[i] > a[i + 1])
				flag = false;
		}
		if (flag == true)
		{
			for (int i = 0; i < m; i++)
				printf("%d ", a[i]);

			printf("\n");
		}

		return;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (ch[i] == 0)
			{
				ch[i] = 1;
				a[x] = i;
				func(x + 1);
				ch[i] = 0;
			}

		}
	}
}
int main()
{
	cin >> n >> m;

	func(0);
}