#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t; cin >> t;
     for (int j=0; j<t; ++j)
     {
          int n, k=0; cin >> n;
          string ns = to_string(n);
          for (int i=0; i<ns.length(); ++i)
               if (ns[i]!='0')
                    ++k;
          cout << k << endl;
          for (int i=0; i<ns.length(); ++i)
          {
               if (ns[i]!='0')
               {
                    string str;
                    str.push_back(ns[i]);
                    while (str.length()!=ns.length()-i)
                         str.push_back('0');
                    cout << str << " ";
               }
          }
          cout << endl;
     }
}
