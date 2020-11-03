#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n;
	int result = 0;
	int alpa[26];

	string s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 0; j < 26; j++)
		{
			alpa[j] = 0;
		}

		cin >> s;

		for (int j = 0; j < s.length() - 1; j++)
		{
			alpa[(int)s[0] - 97] = -1;
			int k = (int)s[j + 1] - 97;


			if ((s[j] != s[j + 1]) && (alpa[k] != -1))
			{
				alpa[k] = -1;
				continue;
			}
			else if ((s[j] != s[j + 1]) && (alpa[k] == -1))
			{
				count++;
				continue;
			}
			else if (s[j] == s[j + 1]) { continue; }
		}

		if (count == 0)
		{
			result++;
			continue;
		}
	}

	cout << result << endl;

}