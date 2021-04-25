#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int n, cnt, Start, End;
vector<pair <int, int>> time;

//시간을 비교하는 불리언 연산자를 만든다. (종료시간으로 짧은것부터 정렬하고, 만약 종료시간이 같다면 시작시간이 작은것부터 정렬한다.)
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

	//cmp를 통하여 원하는 순으로 정렬이 되었다.(End 지점이 빠른 순서대로)
	sort(time.begin(), time.end(), cmp);

	//처음부터 시작한다고 하고, 종료시간을 지정.
	int Endtime = time[0].second;

	//앞의 종료시간보다 같거나 큰시작시점이라면 카운트 증가하고 다음 시작포인트를 지정해준다. 
	for (int i = 1; i < n; i++) {
		if (Endtime <= time[i].first) {
			cnt++;
			Endtime = time[i].second;
		}
	}

	//1번 순을 지정한 값을 1 더해준다. 
	cout << cnt + 1 << endl;;

	return 0;
}
