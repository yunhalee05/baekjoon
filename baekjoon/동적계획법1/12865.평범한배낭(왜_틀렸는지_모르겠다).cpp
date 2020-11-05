#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int n, k, n1, n2;
int W[101];
int V[101];

int func(int i, int w)
{
	if (i == n)
	{
		return 0;
	}
	if (w + W[i] <= k)
	{
		n1 = V[i] + func(i + 1, w + W[i]);
		n2 = func(i + 1, w);
	}

	return max(n1, n2);
}

int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> W[i] >> V[i];

	}
	printf("%d", func(0, 0));

}
