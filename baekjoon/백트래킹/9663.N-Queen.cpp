#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int board[16];


bool Ispossible(int row)
{
	for (int i = 0; i < row; i++)
	{
		if (board[row] == board[i] || abs(board[row] - board[i]) == row - i)
		{
			return false;
		}
	}
	return true;
}
void BackTracking(int row, int n, int* cnt)
{

	if (row == n)
	{
		(*cnt)++;
		return;

	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			board[row] = i;
			if (Ispossible(row) == true)
			{
				BackTracking(row + 1, n, cnt);
			}
		}
	}
}
int main()
{
	int n, cnt = 0;

	cin >> n;

	BackTracking(0, n, &cnt);

	cout << cnt << endl;

	return 0;
}
