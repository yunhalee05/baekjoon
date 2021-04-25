#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int n, cnt, time;
vector<int> Time;

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> time;
		Time.push_back(time);
	}

	//�ð��� ���� �ɸ��� ������� ����
	sort(Time.begin(), Time.end());


	//�ð� ������� ���� ���� �ɸ��� ����� n��, �״����� n-1��...�� ������ ���� �̿��ߴ�. Ȥ�� num ���� �������� �ʰ� cnt += Time[i]*(n-i)�� �ص��ȴ�.
	int num = n;

	for (int i = 0; i < n; i++) {
		cnt += (Time[i] * num);
		num--;
	}
	cout << cnt << endl;

	return 0;
}