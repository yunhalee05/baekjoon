#include<iostream>

using namespace std;


int main()
{
	int A;
	int B;
	cin >> A >> B;

	-10000 <= A <= 10000;
	-10000 <= B <= 10000;

	if (A > B)
	{
		cout << ">" << endl;
	}
	else if (A < B)
	{
		cout << "<" << endl;
	}
	else
	{
		cout << "==" << endl;
	}
}