#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;

    vector<int> v;

    for (int i=0; i<n; ++i)
    {
        int x; cin >> x;
        v.push_back(x);
    }

    int cnt=0;

    for (int i=0; i<n; ++i)
        for (int j=i+1; j<n; ++j)
            if ((v[i]+v[j])%k==0)
                ++cnt;
    
    cout << cnt << endl;
}
