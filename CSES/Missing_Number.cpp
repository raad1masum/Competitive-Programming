#include <bits/stdc++.h>
 
using namespace std;
using ll = int64_t;
 
int main() {
    ios_base::sync_with_stdio(false);
    ll n; cin >> n;
    vector<int> v;
    for (ll i=0; i<n-1; ++i) {
        ll x; cin >> x;
        v.push_back(x);
    }
 
    if (v.size()==1 && v[0]==2) {
        cout << 1 << endl;
        return 0;
    }
 
    if (v.size()==1 && v[0]==1) {
        cout << 2 << endl;
        return 0;
    }
 
    sort(v.begin(), v.end());
 
    for (ll i=0; i<n+1; ++i) {
        if (v[i]!=v[n+1] && v[i+1]!=v[i]+1) {
            cout << v[i]+1 << endl;
            return 0;
        }
    }
}
