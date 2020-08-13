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

    int t; cin >> t;
    while (t--) {
        string n; cin >> n;
        sort(n.begin(), n.end());
        if (n[0] == n.back())
            cout << -1 << endl;
        else
            cout << n << endl;
    }

    return 0;
}
