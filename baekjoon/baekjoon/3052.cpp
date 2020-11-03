#include<iostream>

using namespace std;


int main()
{
	int arr1[10];
	int arr2[10];
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
		0 < arr1[i] <= 1000;
		arr2[i] = arr1[i] % 42;
	}

	for (int j = 0; j < 10; j++)
	{
		for (int k = j + 1; k < 10; k++)
		{
			if (arr2[k] == arr2[j])
			{
				arr2[k] = -1;
			}
		}
		if (arr2[j] != -1) count++;
	}

	cout << count << endl;

}