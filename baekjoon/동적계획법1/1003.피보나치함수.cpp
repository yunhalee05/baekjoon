#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <climits>
#include <string>

using namespace std;
int cache1[41];
int cache2[41];
void fibonacci()
{
	cache1[0] = 1;
	cache1[1] = 0;
	cache2[0] = 0;
	cache2[1] = 1;

	for (int i = 2; i < 42; i++)
	{
		cache1[i] = cache1[i - 1] + cache1[i - 2];
		cache2[i] = cache2[i - 1] + cache2[i - 2];

	}

}
int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		fibonacci();
		cout << cache1[N] << " " << cache2[N] << endl;

	}
	return 0;

}