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

    vector<int> v;

    FOR (i, 0, 4) {
        int x; cin >> x;
        v.PB(x);
    }

    sort(v.begin(), v.end(), greater <>());

    if (v[0]==v[1]+v[2]+v[3]||v[0]+v[3]==v[2]+v[1])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
