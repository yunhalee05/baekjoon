#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int n, cnt, Start, End;
vector<pair <int, int>> time;

//�ð��� ���ϴ� �Ҹ��� �����ڸ� �����. (����ð����� ª���ͺ��� �����ϰ�, ���� ����ð��� ���ٸ� ���۽ð��� �����ͺ��� �����Ѵ�.)
bool cmp(pair<int, int>& a, pair<int, int>& b) {

	if (a.second == b.second) {
		return a.first < b.first;
	}
	else return a.second < b.second;
}
int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> Start >> End;
		time.push_back(make_pair(Start, End));
	}

	//cmp�� ���Ͽ� ���ϴ� ������ ������ �Ǿ���.(End ������ ���� �������)
	sort(time.begin(), time.end(), cmp);

	//ó������ �����Ѵٰ� �ϰ�, ����ð��� ����.
	int Endtime = time[0].second;

	//���� ����ð����� ���ų� ū���۽����̶�� ī��Ʈ �����ϰ� ���� ��������Ʈ�� �������ش�. 
	for (int i = 1; i < n; i++) {
		if (Endtime <= time[i].first) {
			cnt++;
			Endtime = time[i].second;
		}
	}

	//1�� ���� ������ ���� 1 �����ش�. 
	cout << cnt + 1 << endl;;

	return 0;
}
