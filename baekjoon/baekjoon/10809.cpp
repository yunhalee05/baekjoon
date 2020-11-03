#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		int n = -1;

		for (int j = 0; j < s.length(); j++)
		{
			if (ch == s[j])
			{
				n = j;
				break;
			}
		}
		cout << n << " ";
	}
}