#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string s, tmp;
int cnt;
bool Minus = false;

//-��ȣ�� �ѹ��̶� ������ �� ���� ���� ��� ���ָ� �ּڰ��� �ȴٴ� ���� �ٽ�!

int main() {

	cin >> s;

	//���� ��ȣ�� ���´ٸ� ������ ���� -��ȣ ���ο� ���� ���ϰų� ���ָ� �ȴ�. 
	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if (Minus) {
				cnt -= stoi(tmp);
			}
			else {
				cnt += stoi(tmp);
			}
			if (s[i] == '-') {
				Minus = true;
			}
			tmp = "";
		}
		else tmp += s[i];
	}

	cout << cnt << endl;

	return 0;

}