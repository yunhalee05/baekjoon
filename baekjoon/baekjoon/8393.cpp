#include<iostream>

using namespace std;


int main()
{
	int a;
	int result = 0;

	cin >> a;
	1 <= a <= 10000;

	for (int count = 1; count < a + 1; count++)
	{
		result += count;
	}

	cout << result << endl;

}