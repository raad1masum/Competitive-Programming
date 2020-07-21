#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    
    int n; cin >> n;

    for (ll i=1; i<=n; ++i) {
        if (i==1) {
            cout << 0 << endl;
        }
        else if (i==2) {
            cout << 6 << endl;
        }
        else {
            ll n=i*i;
            ll m=i-2;
            ll j=n*(n-1)/2;
            j-=8*m*(m+1)/2;
            cout << j << endl;
        }
    }
}
