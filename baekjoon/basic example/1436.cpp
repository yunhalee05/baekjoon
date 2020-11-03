#include<iostream>
#include<string>

using namespace std;
int main()
{
	int N;
	cin >> N;

	int count = 0;
	int e = 665;
	string end;

	while (++e)
	{
		end = to_string(e);

		if (end.find("666") != -1)
			count++;

		if (count == N)
		{
			cout << e << endl;
			break;
		}
	}

}