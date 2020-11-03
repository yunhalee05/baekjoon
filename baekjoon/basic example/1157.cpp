#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int count[26] = { 0 };

	cin >> s;
	int max = 0;
	int max_index = 0;
	int c = 0;


	for (int i = 0; i < s.length(); i++)
	{
		int num = (int)s[i];
		{
			if (num > 90)
			{
				num -= 32;
				num -= 65;

				count[num] += 1;
			}
			else
			{
				num -= 65;
				count[num] += 1;
			}
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			max_index = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (count[i] == max)
		{
			c++;
		}


		if (c >= 2)
		{
			cout << "?" << endl;
			return 0;
		}


	}
	cout << (char)(max_index + 65) << endl;
}