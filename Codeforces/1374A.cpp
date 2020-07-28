#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int l=0; l<t; ++l) {
        ll x, y, n; cin >> x >> y >> n;

		if (n-n%x+y<=n) {
			cout << n-n%x+y << endl;
		} else {
			cout << n-n%x-(x-y) << endl;
		}
    }

    return 0;
}
