#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#define INF 1e9


using namespace std;

int d[1000001];
int n;

int main() {

	cin >> n;

	d[0] = 0;
	d[1] = 1;
	d[2] = 2;
	d[3] = 3;

	for (int i = 4; i < n + 1; i++)
	{
		d[i] = (d[i - 2] * 2 + d[i - 3]) % 15746;
	}


	cout << d[n] << endl;
	return 0;



}
