#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> a, b;

    int aCnt=0, bCnt=0;

    for (int i=0; i<3; ++i)
    {
        int x; cin >> x;
        a.push_back(x);
    }

    for (int i=0; i<3; ++i)
    {
        int x; cin >> x;
        b.push_back(x);
    }

    for (int i=0; i<3; ++i)
    {
        if (a[i]>b[i])
            ++aCnt;
        else if (a[i]<b[i])
            ++bCnt;
    }

    cout << aCnt << " " << bCnt << endl;
}
