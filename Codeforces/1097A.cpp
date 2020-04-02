#include <bits/stdc++.h>

using namespace std;

int main()
{
     string n, a; cin >> n;

     for (int i = 0; i < 5; i++)
     {
          cin >> a;
          if (n[0] == a[0] || n[1] == a[1])
          {
               cout << "YES" << endl;
               return 0;
          }
     }
     cout << "NO" << endl;
}
