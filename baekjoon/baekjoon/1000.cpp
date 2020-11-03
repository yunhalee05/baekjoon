#include<iostream>

using namespace std;

int add(int num_a, int num_b)
{
	int sum = num_a + num_b;

	return sum;
}

int main()
{
	int A;
	int B;
	cin >> A;
	cin >> B;

	cout << add(A, B) << endl;

}