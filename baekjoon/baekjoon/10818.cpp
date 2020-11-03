#include<iostream>
#include<limits>

using namespace std;


int main()
{
	int n, j;
	int min_number = 1000000;
	int max_number = -1000000;

	cin >> n;

	0 < n < 1000001;

	int* arr = new int[n];


	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		-1000001 < arr[i] < 1000001;
		if (arr[i] > max_number)
		{
			max_number = arr[i];
		}
		if (arr[i] < min_number)
		{
			min_number = arr[i];
		}

	}
	cout << min_number << " " << max_number << endl;

	delete[]arr;
}