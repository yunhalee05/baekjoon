#include<iostream>

using namespace std;


int main()
{
	int A;
	int B;

	cin >> A;
	cin >> B;

	if ((0 <= A) && (0 <= B) && (A <= 10000) && (B <= 10000))
	{
		cout << A + B << endl;
		cout << A - B << endl;
		cout << A * B << endl;
		cout << A / B << endl;
		cout << A % B << endl;
	}

}