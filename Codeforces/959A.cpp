#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n; cin >> n;

     if (n == 1)
     {
          cout << "Ehab" << endl;
          return 0;
     }
     else if (n % 2 == 0)
     {
          cout << "Mahmoud" << endl;
          return 0;
     }
     else if (n % 2 != 0)
     {
          cout << "Ehab" << endl;
          return 0;
     }
     return 1;
}
