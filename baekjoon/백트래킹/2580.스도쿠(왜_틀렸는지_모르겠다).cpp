#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int s[10][10];
vector <pair<int, int> > v;

bool ispossible(int x, int y, int z)
{
	for (int i = 0; i < 9; i++)
	{
		if (s[x][i] == z || s[i][y] == z)//가로 세로영역 검사
		{
			return false;
		}
	}

	int box_x = x / 3;//네모칸 검사
	int box_y = y / 3;
	for (int i = box_x * 3; i < (box_x + 1) * 3; i++)
	{
		for (int j = box_y * 3; j < (box_y + 1) * 3; j++)
		{
			if (s[i][j] == z)
				return false;
		}
	}

	return true;
}
void BackTracking(int x)
{
	if (x == v.size())
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				printf("%d ", s[i][j]);
			}

			printf("\n");

		}
		return;
	}
	for (int i = 1; i < 10; i++)
	{
		if (ispossible(v[x].first, v[x].second, i) == true)
		{
			s[v[x].first][v[x].second] = i;
			BackTracking(x + 1);
			s[v[x].first][v[x].second] = 0;

		}
	}
	return;

}
int main()
{

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			cin >> s[i][j];

			if (s[i][j] == 0)
			{
				v.push_back(make_pair(i, j));
			}
		}
	}

	BackTracking(0);


	return 0;
}

