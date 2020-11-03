#include<iostream>

using namespace std;


int main()
{
	int H;
	int M;
	cin >> H;
	cin >> M;

	0 <= H <= 23;
	0 <= M <= 59;

	if ((M - 45) < 0)
	{
		M = M + 15;

		if (H == 0)
		{
			H = 23;
		}
		else
		{
			H -= 1;
		}
	}

	else
	{
		M = M - 45;
	}

	cout << H << " " << M << endl;
}