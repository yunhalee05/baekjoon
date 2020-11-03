#include<iostream>

using namespace std;
bool b[10001];
int sum = 0;
int d(int n)
{
	sum = n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
	return sum;
}
int main(void)
{
	for (int i = 1; i < 10001; i++)
	{
		int j = d(i);
		b[j] = 1;
	}
	for (int i = 1; i < 10001; i++)
	{
		if (b[i] == 0)
		{
			cout << i << endl;
		}
	}
}