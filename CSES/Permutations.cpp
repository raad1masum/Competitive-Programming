#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    vector<int> v;

    if (n<4 && n>1) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    for (ll i=0; i<n; ++i)
        v.push_back(0);

    v[0]=2;

    for (ll i=1; i<n/2; ++i) {
        v[i]=v[i-1]+2;
    }

    v[n/2]=1;
    for (ll i=n/2+1; i<n; ++i) {
        v[i]=v[i-1]+2;
    }

    for (auto i : v) {
        cout << i << " ";
    }
    
    cout << endl;
}
