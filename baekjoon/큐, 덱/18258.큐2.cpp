#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main()                       //방법1
{
	ios::sync_with_stdio(0);

	cin.tie(0);//시간초과 때문에 얘네들은 꼭 넣어주기

	queue<int> q;

	int n;
	cin >> n;
	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		string st;
		cin >> st;

		if (st == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (st == "pop")
		{
			if (q.empty())
			{
				arr.push_back(-1);
			}
			else { arr.push_back(q.front()); q.pop(); }
		}
		else if (st == "size")
		{
			arr.push_back(q.size());
		}
		else if (st == "empty")
		{
			if (q.empty())
			{
				arr.push_back(1);
			}
			else
			{
				arr.push_back(0);
			}
		}
		else if (st == "front")
		{
			if (!q.empty())
			{
				arr.push_back(q.front());
			}
			else
			{
				arr.push_back(-1);
			}
		}
		else if (st == "back")
		{
			if (!q.empty())
			{
				arr.push_back(q.back());
			}
			else {
				arr.push_back(-1);
			}
		}

	}
	for (int i = 0; i < arr.size(); i++)
	{
		printf("%d\n", arr[i]);
	}
}



#include <iostream>                              //방법2
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	queue<int> q;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string st;
		cin >> st;

		if (st == "push")
		{
			int num;
			cin >> num;
			q.push(num);
		}
		else if (st == "pop")
		{
			if (q.empty())
			{
				printf("%d\n", -1);
			}
			else { printf("%d\n", q.front()); q.pop(); }
		}
		else if (st == "size")
		{
			printf("%d\n", q.size());
		}
		else if (st == "empty")
		{
			if (q.empty())
			{
				printf("%d\n", 1);
			}
			else
			{
				printf("%d\n", 0);
			}
		}
		else if (st == "front")
		{
			if (!q.empty())
			{
				printf("%d\n", q.front());
			}
			else
			{
				printf("%d\n", -1);
			}
		}
		else if (st == "back")
		{
			if (!q.empty())
			{
				printf("%d\n", q.back());
			}
			else {
				printf("%d\n", -1);
			}
		}

	}
	return 0;


}