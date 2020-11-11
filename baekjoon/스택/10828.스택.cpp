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
	while (n > 0)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int num;
			cin >> num;
			st.push(num);
		}
		else if (cmd == "pop")
		{
			if (st.empty()) cout << "-1\n";
			else { cout << st.top() << endl; st.pop(); }
		}
		else if (cmd == "top")
		{
			if (st.empty()) cout << "-1\n";
			else cout << st.top() << endl;
		}
		else if (cmd == "size")
		{
			cout << st.size() << endl;
		}
		else if (cmd == "empty")
		{
			if (st.empty())cout << "1\n";
			else cout << "0\n";
		}
		n--;
	}

}