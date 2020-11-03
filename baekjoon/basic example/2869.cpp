#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int a, b, v, x;
	cin >> a >> b >> v;

	if ((v - a) % (a - b) != 0)
		x = (v - a) / (a - b) + 2;
	else
		x = (v - a) / (a - b) + 1;

	cout << x << endl;
}