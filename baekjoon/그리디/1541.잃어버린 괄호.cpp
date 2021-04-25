#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string s, tmp;
int cnt;
bool Minus = false;

//-부호가 한번이라도 나오면 그 뒤의 값은 모두 빼주면 최솟값이 된다는 것이 핵심!

int main() {

	cin >> s;

	//만약 부호가 나온다면 이전의 값은 -부호 여부에 따라서 더하거나 빼주면 된다. 
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