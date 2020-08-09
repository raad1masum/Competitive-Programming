/*
ID: piraadw1
TASK: milk2
LANG: C++
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
     ifstream fin ("milk2.in");
     ofstream fout ("milk2.out");

     int n, x, y; fin >> n;
     int a, s;

     for (int i=0; i<n; ++i)
     {
          fin >> x >> y;
          if (i==0)
          {
               a=x;
               s=y-x;
          }
          else
          {
               if (x<a)
                    a=x;
               else if (y-x>s)
                    s=y-x;
          }
     }
     fout << s << " " << a << endl;
}
