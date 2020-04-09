#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t, n; cin >> t;

     while (t--)
     {
          cin >> n;
          set<int> s;
          while (n--)
          {
               int a;
               cin >> a;
               s.insert(a);
          }
          cout << s.size()<< endl;
     }
}
