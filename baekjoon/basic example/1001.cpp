#include<iostream>

using namespace std;

int sub(int num_a, int num_b)
{
	int sub = num_a - num_b;

	return sub;
}

int main()
{
	int A;
	int B;

	cin >> A;
	cin >> B;

	if (0 < A < 10, 0 < B < 10)
	{
		cout << sub(A, B) << endl;
	}

}