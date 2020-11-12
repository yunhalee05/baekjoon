#include <iostream>
#include <deque>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	deque<int> d;

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		d.push_back(i);
	}
	for (int i = 0; i < n - 1; i++)
	{
		d.pop_front();
		d.push_back(d.front());
		d.pop_front();
	}

	printf("%d\n", d.front());
	return 0;


}

