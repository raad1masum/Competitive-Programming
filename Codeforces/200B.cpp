#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n; cin >> n;
     int c;
     int x = n;
     double t = 0.0;

     while (n--)
     {
          cin >> c;
          t += c;
     }

     cout << t / x << endl;
}
