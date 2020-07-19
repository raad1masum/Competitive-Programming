#include <bits/stdc++.h>
 
using namespace std;
using ll = int64_t;
 
int main() {
    ios_base::sync_with_stdio(false);
 
    string n; cin >> n;
    ll cnt=0, curr=1;
    for (ll i=1; i<n.length(); ++i) {
        if (n[i]!=n[i-1]) {
            cnt=max(cnt, curr);
            curr=0;
        }
        ++curr;
    }
    cnt=max(cnt, curr);
    cout << cnt << endl;
}
