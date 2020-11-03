#include<iostream>

using namespace std;


int main()
{
	int N = 0;

	cin >> N;
	1 <= N <= 100;

	for (int count = 1; count < N + 1; count++)
	{
		for (int counttwo = 1; counttwo < (count + 1); counttwo++)
		{
			cout << "*";
		}

		cout << endl;
	}
}