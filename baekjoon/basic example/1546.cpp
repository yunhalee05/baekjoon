#include<iostream>

using namespace std;


int main()
{
	int n = 0;
	double m = 0;
	double avg = 0;

	cin >> n;
	0 < n <= 1000;

	double score[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> score[i];

		if (score[i] > m)
		{
			m = score[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		score[i] = (score[i]) / m * 100;
	}

	for (int j = 0; j < n; j++)
	{
		avg += score[j];
	}

	avg = avg / n;
	cout.precision(5);
	cout << avg << endl;

}