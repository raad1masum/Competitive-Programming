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
        vector<int> v;

        for (int i=0; i<n; ++i) {
            int x; cin >> x;
            v.push_back(x);
        }

        for (int i=n-1; i>=0; --i) {
            cout << v[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
