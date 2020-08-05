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

    ll t;cin >> t;

    while (t--) {
        ll a, b; cin >> a >> b;

        if (a<b)
            swap(a, b);

        if ((a+b)%3==0&&a<=2*b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
