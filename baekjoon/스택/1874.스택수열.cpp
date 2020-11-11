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
	vector<int>arr;
	vector<char>answer;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}


	stack<int>st;
	int j = 0;

	for (int i = 1; i <= n; i++)
	{


		st.push(i);
		answer.push_back('+');

		while (!st.empty() && st.top() == arr[j])
		{
			st.pop();
			answer.push_back('-');
			j++;
		}

	}

	if (!st.empty())
	{
		printf("NO");//시간초과 문제로 꼭 printf를 쓰도록 하자
	}

	else
	{
		for (int i = 0; i < answer.size(); i++)
		{
			printf("%c\n", answer[i]);
		}
	}


	return 0;
}