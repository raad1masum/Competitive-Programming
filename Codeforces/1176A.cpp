#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (int i = a; i < b; ++i)
#define FOR1(i,a,b) for (int i = a; i <= b; ++i)
#define SQ(a) a*a

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q; cin >> q;

    while (q--) {
        ll n; cin >> n;

        ll c2=0, c3=0, c5=0;

		while (n%2==0) {
			n/=2;
			++c2;
		}
		while (n%3==0) {
			n/=3;
			++c3;
		}
		while (n % 5 == 0) {
			n/=5;
			++c5;
		}
		if (n!=1) {
			cout << -1 << endl;
		} else {
			cout << c2+c3*2+c5*3 << endl;
		}
    }

    return 0;
}
