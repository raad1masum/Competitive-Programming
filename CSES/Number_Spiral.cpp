#include <bits/stdc++.h>

using namespace std;
using ll = int64_t;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll x, y;
    cin >> t;
    while (t--) {
        cin >> x >> y;
        if (x<y) {
            if (y%2==1) {
                ll r = y*y;
                cout << r-x+1 << endl;
            }
            else {
                ll r=(y-1)*(y-1)+1;
                cout << r+x-1 << endl;
            }
        }
        else {
            if (x%2==0) {
                ll r = x*x;
                cout << r-y+1 << endl;
            }
            else {
                ll r = (x-1)*(x-1)+1;
                cout << r+y-1 << endl;
            }
        }
    }
    return 0;
}
