#include <iostream>
#include <algorithm>
#include <iostream>
#include <stack>
#include<vector>
#include<string>


using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<string>arr(n);

	for (int i = 0; i < n; i++)
	{
		stack<int>st;
		string vps;
		bool flag = true;

		cin >> vps;
		for (int j = 0; j < vps.length(); j++)
		{
			if (vps[j] == '(')
			{
				st.push(1);
			}
			else
			{
				if (st.empty())
				{
					flag = false;
					break;
				}
				else
				{
					st.pop();
				}
			}
		}

		if (flag && st.empty())
		{
			arr[i] = "YES";
		}
		else
		{
			arr[i] = "NO";
		}

	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}