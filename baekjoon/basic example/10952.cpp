#include<iostream>

using namespace std;


int main()
{
	int A, B;
	0 < A, B < 10;


	while (true)
	{
		cin >> A >> B;

		if ((A == 0) && (B == 0))
			break;
		else
		{
			cout << A + B << endl;
		}
	}
}