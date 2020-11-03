#include<iostream>

using namespace std;


int main()
{
	int i, j, k = 0;
	int N = 0;

	cin >> N;
	1 <= N <= 100;

	for (int i = 1; i < N + 1; i++)
	{
		cout.width(N - i + 1);

		for (int k = 1; k < (i + 1); k++)
		{
			cout << "*";
		}

		cout << endl;
	}
}