#include<iostream>

using namespace std;


int main()
{
	double A;
	double B;

	cin >> A;
	cin >> B;

	if (0 < A < 10, 0 < B < 10)
	{
		cout.precision(10);
		cout << A / B << endl;
	}

}