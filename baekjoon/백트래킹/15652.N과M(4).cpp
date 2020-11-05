#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int a[10];

void func(int x, int y)
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
		for (int i = y; i <= n; i++)
		{
			a[x] = i;
			func(x + 1, i);
		}
	}
}
int main()
{
	cin >> n >> m;

	func(0, 1);
	return 0;
}
