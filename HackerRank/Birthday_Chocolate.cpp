#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> s;

    for (int i=0; i<n; ++i)
    {
        int x; cin >> x;
        s.push_back(x);
    }

    int d, m; cin >> d >> m;
    int cnt=0;

    for (int i=0; i<n; ++i)
    {
        int tmp=0;
        for (int j=i; j<m+i; ++j)
            tmp += s[j];
        if (tmp==d)
            ++cnt;
    }

    cout << cnt << endl;
}
