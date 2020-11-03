#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	getline(cin, s);
	s.size() < 1000000;

	int size = s.size();
	int count = 1;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == ' ')
		{
			count++;
		}

	}

	if (s.front() == ' ')
	{
		count--;
	}
	if (s.back() == ' ')
	{
		count--;
	}

	cout << count << endl;
}