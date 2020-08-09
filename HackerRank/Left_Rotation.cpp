#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d; cin >> n >> d; d %= n;
    vector<int> arr(n);
    vector<int> out(n);

    for (int i=0; i<n; ++i)
    {
        int x; cin >> x;
        arr[i] = x;
    }

    for(int i=0; i<n; ++i)
        out[(n+i-d)%n] = arr[i];

    for (int f=0; f<out.size(); ++f)
        cout << out[f] << " ";
    cout << endl;
}
