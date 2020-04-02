#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n; cin >> n;
     int c = 0;

     while (n != 0) 
     {
          if (n >= 100)
          {
               n -= 100;
               c++;
          }
          else if (n >= 20)
          {
               n -= 20;
               c++;
          }
          else if (n >= 10)
          {
               n -= 10;
               c++;
          }
          else if (n >= 5)
          {
               n -= 5;
               c++;
          }
          else if (n >= 1)
          {
               n -= 1;
               c++;
          }
     }
     cout << c << endl;
}
