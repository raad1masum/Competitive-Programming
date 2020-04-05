#include <bits/stdc++.h>

using namespace std;

int main()
{
     for (int i=0; i<5; ++i)
     {
          for (int j=0; j<5; ++j)
          {
               int n[5][5]; cin >> n[i][j];
               if (n[i][j] == 1) cout << abs(i-2) + abs(j-2) << endl;
          }
     }
     return 0;
}
