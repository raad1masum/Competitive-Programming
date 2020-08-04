#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i < b; ++i)
#define REP1(i,a,b) for (int i = a; i <= b; ++i)
#define SQ(a) a*a

typedef long long ll;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    REP(i, 0, n) {
        string s; cin >> s;
        ll len = s.length();

        if (len<=10) {
            cout << s << endl;
        } else {
            cout << s[0] << len-2 << s[len-1] << endl;
        }
    }

    return 0;
}
