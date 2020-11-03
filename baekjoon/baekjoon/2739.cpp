#include<iostream>

using namespace std;


int main()
{
	int N;
	cin >> N;
	0 <= N <= 9;

	for (int count = 1; count < 10; ++count)
	{
		cout << N << " * " << count << " = " << N * count << endl;
	}
}