#include<iostream>

using namespace std;


int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	int count = 0;

	0 <= x < 10;
	0 <= y < 10;
	0 < n < 100;


	cin >> n;

	x = n / 10;
	y = n % 10;
	int oldn = n;


	while (true)
	{
		y = (x + y) % 10;
		x = n % 10;
		n = x * 10 + y;

		count++;

		if (oldn == n)
		{
			cout << count << endl;
			break;
		}
	}
}