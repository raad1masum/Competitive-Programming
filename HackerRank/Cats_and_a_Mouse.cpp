#include <bits/stdc++.h>

using namespace std;

int main() {
    int q; cin >> q;

    while (q--)
    {
        int a, b, c; cin >> a >> b >> c;

        int diff1 = abs(a-c);
        int diff2 = abs(b-c);

        if (diff1<diff2)
            cout << "Cat A" << endl;
        else if (diff1>diff2)
            cout << "Cat B" << endl;
        else
            cout << "Mouse C" << endl;
    }
}
