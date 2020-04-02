#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n; cin >> n;
     string x; cin >> x;

     int z = 0;
     int k = 0;

     for (int i=0; i<n; i++)
     {
          if (x[i] == 'z')
          {
               z++;
          }
          else if (x[i] == 'n')
          {
               k++;
          }
     }

     while (k--)
     {
          cout << 1 << " ";
     }
     while (z--)
     {
          cout << 0 << " ";
     }
     cout << endl;
}
