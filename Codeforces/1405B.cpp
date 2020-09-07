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
        int n; cin >> n;
        ll sum=0;
        ll out=0;

        for (int i=0; i<n; ++i) {
            ll x; cin >> x;
            sum+=x;
            if (out>sum) {
                out=sum;
            } else if (sum>out) {
                out=out;
            }
        }

        cout << -out << endl;
    }

    return 0;
}
