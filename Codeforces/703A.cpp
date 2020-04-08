#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n; cin >> n;
     int m, c, mcount = 0, ccount = 0;

     while (n--)
     {
          cin >> m >> c;
          if (m > c) ++mcount;
          else if (m < c)  ++ccount;
     }

     if (mcount > ccount) cout << "Mishka" << endl;
     else if (mcount < ccount) cout << "Chris" << endl;
     else if (mcount == ccount) cout << "Friendship is magic!^^" << endl;
}
