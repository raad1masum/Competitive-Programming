#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n, x=0; cin >> n;
     vector<int> a(n), b(n);

     for (int i=0; i<n; ++i) 
     {
          cin >> a[i];
          a[i] += x;
          x = max(x,a[i]);
          cout << a[i] << ' ';
     }
     
     cout << endl;
     return 0;
}
