#include <bits/stdc++.h>

using namespace std;

int main() {
    int b, n, m; cin >> b >> n >> m;

    vector<int> keyboard;
    vector<int> drives;

    for (int i=0; i<n; ++i)
    {
        int x; cin >> x;
        keyboard.push_back(x);
    }

    for (int i=0; i<m; ++i)
    {
        int x; cin >> x;
        drives.push_back(x);
    }

    int highest=-1;

    for (int i=0; i<n; ++i)
        for (int j=0; j<m; ++j)
            if (keyboard[i]+drives[j] <= b && keyboard[i]+drives[j]>highest)
                highest = keyboard[i]+drives[j];

    cout << highest << endl;
}
