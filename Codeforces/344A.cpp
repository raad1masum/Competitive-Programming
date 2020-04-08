#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n; cin >> n;
     string a; cin >> a;
     string c;
     int x = 1;

     for (int i=0; i<n-1; i++)
     {
          cin >> c;
          if (a != c)
          {
               x++;
               a = c;
          }
     }
     cout << x << endl;
}
