#include<iostream>
#include<string>

using namespace std;

int main()
{
	int T, r;
	cin >> T;
	string s;


	for (int i = 0; i < T; i++)
	{
		cin >> r >> s;
		1 <= r <= 8;

		for (int j = 0; j < s.size(); j++)
		{

			for (int k = 0; k < r; k++)
			{
				if (k != r)
				{
					cout << s[j];
				}
				if (k == r)
				{
					break;
				}

			}
		}
		cout << endl;
	}
}