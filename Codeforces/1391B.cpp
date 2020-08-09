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
        int n, m; cin >> n >> m;

        char belt[n][m];

        for (int i=0; i<n; ++i) {
            for (int j=0; j<m; ++j) {
                char c; cin >> c;
                belt[i][j]=c;
            }
        }


        int cnt=0;
        
        for (int i=0; i<n; ++i) {
            if (belt[i][m-1]=='R') {
                belt[i][m-1]='D';
                ++cnt;
            }
        }

        for (int i=0; i<m; ++i) {
            if (belt[n-1][i]=='D') {
                belt[n-1][i]='R';
                ++cnt;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
