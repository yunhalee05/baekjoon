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

	//시간이 적게 걸리는 사람부터 정렬
	sort(Time.begin(), Time.end());


	//시간 순서대로 가장 적게 걸리는 사람은 n번, 그다음은 n-1번...의 순으로 됨을 이용했다. 혹은 num 따로 지정하지 않고 cnt += Time[i]*(n-i)로 해도된다.
	int num = n;

	for (int i = 0; i < n; i++) {
		cnt += (Time[i] * num);
		num--;
	}
	cout << cnt << endl;

	return 0;
}