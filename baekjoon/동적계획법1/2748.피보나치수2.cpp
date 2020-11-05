#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main()
{
	int n, m = 2;
	cin >> n;
	vector<long long> a;
	a.push_back(0);
	a.push_back(1);


	while (m <= n)
	{
		a.push_back(a[m - 1] + a[m - 2]);
		m++;
	}
	cout << a[n] << endl;
}
