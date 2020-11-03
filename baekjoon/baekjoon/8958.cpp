#include<iostream>
#include<string>

using namespace std;


int main()
{
	int n;
	int count = 0;
	cin >> n;
	string str;
	int* score = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		count = 0;
		score[i] = 0;
		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
			{
				count += 1;
				score[i] += count;
			}
			else if (str[j] == 'X')
			{
				count = 0;
			}
			else {}
		}
		str.clear();
	}
	for (int i = 0; i < n; i++)
		cout << score[i] << endl;


	delete[] score;


}