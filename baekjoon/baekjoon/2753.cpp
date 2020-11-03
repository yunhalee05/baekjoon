#include<iostream>

using namespace std;


int main()
{
	int A;
	cin >> A;
	0 <= A <= 4000;

	if (((A % 4 == 0) && (A % 100 != 0)) || (A % 400 == 0))
	{
		cout << "1" << endl;
	}

	else
	{
		cout << "0" << endl;
	}
}