#include<iostream>

using namespace std;

int main()
{
	int c;
	double score[1000];
	double sum;
	double count;
	double case_number;
	double avg;
	cin >> c;

	for (int j = 0; j < c; j++)
	{
		double sum = 0;
		double count = 0;
		double case_number = 0;
		double avg = 0;

		cin >> case_number;
		for (int i = 0; i < case_number; i++)
		{
			cin >> score[i];
			sum += score[i];
		}
		avg = sum / case_number;
		for (int i = 0; i < case_number; i++)
		{
			if (score[i] > avg)
			{
				count += 1;
			}
		}

		cout << fixed;
		cout.precision(3);
		cout << count / case_number * 100 << "%" << endl;

	}
}