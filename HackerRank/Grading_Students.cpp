#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x; cin >> n;
    for (int i=0; i<n; ++i)
    {
        cin >> x;
        if (x>=38 && x%5>2)
            x += 5 - (x % 5);
        cout << x << endl;
    }
    return 0;
}
