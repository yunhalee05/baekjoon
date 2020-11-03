#include<iostream>

using namespace std;

int d(int n)
{
	int count = 0;
	int arr[3];
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)count++;
		else
		{
			if (i == 1000) count = d(999);
			arr[0] = i / 100;
			arr[1] = (i / 10) % 10;
			arr[2] = i % 10;
			if (arr[0] - arr[1] == arr[1] - arr[2])count++;
		}
	}
	return count;
}
int main()
{
	int n;
	cin >> n;
	0 < n < 1001;

	cout << d(n);

	return 0;
}