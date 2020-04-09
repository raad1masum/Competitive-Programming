#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n, c=0; cin >> n;
     string s;

     while (n--)
     {
          cin >> s;
          if (s == "++X" || s == "X++") ++c;
          else if (s == "--X" || s == "X--") --c;
     }
     cout << c << endl;
}
