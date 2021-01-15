#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);           
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;                                        
		int ans = 0;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			int a;
			cin >> a;         
			if (a % 2 == 0) {
				// increment if the number is even
				cnt++;
			} else {
				// otherwise, get the sum between the odd and the number of even numbers at this point
				ans += cnt;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
