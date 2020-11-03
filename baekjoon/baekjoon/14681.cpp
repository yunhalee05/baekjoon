#include<iostream>

using namespace std;


int main()
{
	int x;
	int y;
	cin >> x;
	cin >> y;

	(-1000 <= x <= 1000) && (x != 0);
	(-1000 <= y <= 1000) && (y != 0);


	if ((0 < x) && (0 < y))
	{
		cout << "1" << endl;
	}

	else if ((0 > x) && (0 < y))
	{
		cout << "2" << endl;
	}
	else if ((0 > x) && (0 > y))
	{
		cout << "3" << endl;
	}
	else
	{
		cout << "4" << endl;
	}
}