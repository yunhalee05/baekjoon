#include<iostream>

using namespace std;

int sum;

int factory(int n)
{
	//n!���ϱ�
	if (n == 0)
		return 1;
	else if (n == 1)
		return 1;
	else if (n > 0)
	{
		return n * factory(n - 1);
	}
}
int main()
{
	//n!���ϱ�
	int n;
	cin >> n;
	0 <= n <= 12;

	cout << factory(n) << endl;

}