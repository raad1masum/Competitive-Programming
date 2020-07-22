#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;
    ll out=1, m=2, x=1e9+7;

    for (ll i=0; i<n; ++i)
        out=out*m%x;

    cout << out << endl;
    return 0;
}
