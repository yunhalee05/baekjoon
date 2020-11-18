#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> money;
	int count = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		money.push_back(num);
	}
	for (int i = n - 1; i >= 0; i--)
	{
		if (k == 0)
		{
			break;
		}
		count += (k / money[i]);
		k = (k % money[i]);
	}

	cout << count;


	return 0;
}