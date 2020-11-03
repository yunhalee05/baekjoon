#include<iostream>

using namespace std;


int main()
{
	int x = 0, n = 0, a = 0;

	cin >> n >> x;
	1 <= x, n <= 10000;

	int* arr = new int[n];

	1 <= a <= 10000;

	for (a = 0; a < n; ++a)
	{
		cin >> arr[a];

		if (arr[a] < x)
		{
			cout << arr[a] << " ";
		}
	}

}