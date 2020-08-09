#include <bits/stdc++.h>

using namespace std;

int main()
{
    // input strings
    int n; cin >> n;
    vector<string> s1(n);
    for (int i=0; i<n; ++i)
    {
        string s; cin >> s;
        s1[i] = s;
    }

    // input queries
    int q; cin >> q;
    vector<string> s2(q);
    for (int i=0; i<q; ++i)
    {
        string x; cin >> x;
        s2[i] = x;
    }

    // iterate through query
    for (int i=0; i<s2.size(); ++i)
    {
        int count=0;
        // iterate through string
        for (int j=0; j<s1.size(); ++j)
            if (s1[j] == s2[i])
                ++count;
        cout << count << endl;
    }

    return 0;
}
