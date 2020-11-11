#include <iostream>
#include <algorithm>
#include <iostream>
#include <stack>
#include<vector>
#include<string>


using namespace std;


int main()
{

	vector<string>arr;


	while (1)
	{
		stack<char>st1;
		string vps;
		getline(cin, vps, '\n');

		bool flag1 = true;

		if (vps == ".")
		{
			break;
		}

		for (int j = 0; j < vps.length(); j++)
		{
			if (vps[j] == '(')
			{
				st1.push(')');
			}
			else if (vps[j] == '[')
			{
				st1.push(']');
			}
			else if (vps[j] == ')' || vps[j] == ']')
			{
				if ((st1.empty()) || (st1.top() != vps[j]))
				{
					flag1 = false;
					break;
				}
				else
				{
					st1.pop();
				}
			}
		}

		if (flag1 && st1.empty())
		{
			arr.push_back("YES");
		}
		else
		{
			arr.push_back("NO");
		}

	}
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}