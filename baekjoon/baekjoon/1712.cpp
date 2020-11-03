#include<iostream>
#include<string>

using namespace std;

int main()
{
	int A, B, C, x;
	cin >> A >> B >> C;

	if (B >= C)
		cout << -1 << endl;
	else
	{
		int y = C - B;

		cout << (A / y) + 1 << endl;
	}


}