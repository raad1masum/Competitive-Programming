#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);

    ll n, sum=0, px=1; cin >> n;
    ll sum1=n*(n+1)/4;
    vector<int> v;

    if (n*(n+1)%4!=0) {
        cout << "NO" << endl;
        return 0;
    }

    if (sum1%n==0) {
        v.push_back(n);
        sum+=n;
    }

    while (sum1!=sum) {
        if (sum1%n==0) {
            v.push_back(n-px);
            v.push_back(px);
            sum+=n;
        }
        else {
            v.push_back(n-px+1);
            v.push_back(px);
            sum+=n+1;
        }
        ++px;
    }
    sort(v.begin(), v.end());
    px=0;
    string y;
    cout << "YES" << endl;
    cout << v.size() << endl;
    for (int i=1; i<=n; ++i) {
        if (px<v.size() && v[px]==i) {
            cout << i << " ";
            ++px;
        }
        else {
            y+=to_string(i) + " ";
        }
    }
    cout << endl << n-v.size() << endl << y << endl;;
}
