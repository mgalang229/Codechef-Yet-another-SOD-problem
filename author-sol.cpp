#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long l, r;
		cin >> l >> r;
		// calculate the difference of the no. of factors of 3 from 1 to 'r' and the no.
		// of factors of 3 from 1 to '(l - 1)'
		cout << (r / 3) - (l - 1) / 3 << '\n';
	}
	return 0;
}
