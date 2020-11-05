#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int a[10];

void func(int x)
{

	if (x == m)
	{
		for (int i = 0; i < m; i++)
			printf("%d ", a[i]);

		printf("\n");
		return;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			a[x] = i;
			func(x + 1);
		}
	}
}
int main()
{
	cin >> n >> m;

	func(0);
}
