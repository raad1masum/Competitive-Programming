#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s, t, a, b, m, n; cin >> s >> t >> a >> b >> m >> n;
    
    vector<int> apples;
    vector<int> oranges;
    
    int applesCount=0, orangesCount=0;

    for (int i=0; i<m; ++i)
    {
        int x; cin >> x;
        apples.push_back(x);
    }

    for (int j=0; j<n; ++j)
    {
        int y; cin >> y;
        oranges.push_back(y);
    }

    for (int i=0; i<m; ++i)
        if (apples[i]+a>=s && apples[i]+a<=t)
            ++applesCount;

    for (int j=0; j<n; ++j)
        if (oranges[j]+b>=s && oranges[j]+b<=t)
            ++orangesCount;

    cout << applesCount << endl;
    cout << orangesCount << endl;
}
