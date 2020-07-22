#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n; cin >> n;

    ll cnt=0;
    for (int i=5; n/i>=1; i*=5)
        cnt+=n/i;

    cout << cnt << endl;

    return 0;
}
