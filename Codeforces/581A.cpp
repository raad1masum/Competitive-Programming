#include <bits/stdc++.h>

using namespace std;

int main()
{
     int a, b; cin >> a >> b;

     cout << min(a, b) << " ";
     cout << max((a - min(a, b)) / 2, (b - min(a, b)) / 2) << endl;
}
