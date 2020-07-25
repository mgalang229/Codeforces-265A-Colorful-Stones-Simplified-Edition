#include <bits/stdc++.h>

using namespace std;

void test_case() {
	string s, t;
	cin >> s >> t;
	int cnt = 0;
	for(int i = 0; i < (int) t.size(); ++i) {
		if(t[i] == s[cnt]) {
			cnt++;
		}
	}
	cout << cnt + 1 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case();
	//}
	test_case();
	return 0;
}
