#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, v, b, j; cin >> n >> q;
    vector<int> arr[n];

    for (int i=0; i<n; ++i)
    {
        int k;
        cin >> k;
        arr[i].push_back(k);
        for (int m=1; m<=k; ++m)
        {
            cin >> v;
            arr[i].push_back(v);
        }
    }

    for (int i=0; i<q; ++i)
    {
        cin >> b >> j;
        cout << arr[b][j+1] << endl;
    }

    return 0;
}
