#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);

	cin.tie(0);

	queue<int> q;
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	printf("%c", '<');

	while (!q.empty())
	{
		for (int i = 1; i < k; i++)
		{
			/*q.push(q.front());
			q.pop();*/
			int num = q.front();
			q.push(num);//이렇게 num으로 바꿔주니까 맞았다. 
			q.pop();
		}
		printf("%d", q.front());
		if (q.size() != 1)
		{
			printf("%c", ',');
		}
		q.pop();
	}

	printf("%c", '>');


	return 0;


}
