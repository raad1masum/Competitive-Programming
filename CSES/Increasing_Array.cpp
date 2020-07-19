#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    ll m=0, ans=0;

    for (ll i=0; i<n; ++i) {
        ll x; cin >> x;
        m=max(x, m);
        ans+=m-x;
    }

    cout << ans << endl;
}
