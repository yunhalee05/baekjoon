#include <iostream>
#include <algorithm>
#include <iostream>
#include <stack>


using namespace std;


int main()
{
	int n;
	cin >> n;
	stack<int>st;
	int sum = 0;
	while (n > 0)
	{
		int num;
		cin >> num;

		if (num != 0)
		{
			st.push(num);
			sum += num;
		}
		else
		{
			sum -= st.top();
			st.pop();
		}
		n--;
	}

	cout << sum << endl;
}