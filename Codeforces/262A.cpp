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

    int n, k, cnt=0; cin >> n >> k;

    while (n--) {
        string x; cin >> x;
        int tmp=0;

        for (int i=0; i<x.length(); ++i)
            if (x[i]=='4'||x[i]=='7')
                ++tmp;

        if (tmp<=k)
            ++cnt;
    }

    cout << cnt << endl;

    return 0;
}
