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

    int a, b, c, d; cin >> a >> b >> c >> d;

    if (c>2*d||d>2*c||d>=b)
        cout << "-1" << endl;
    else {
        cout << 2*a << endl;
        cout << 2*b << endl;
        cout << max(c,d) << endl;

    }

    return 0;
}
