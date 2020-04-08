#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n, h; cin >> n >> h;
     int c = 0; 
     int a;
     
     while (n--)
     {
          cin >> a;
          if (a <= h) {c++;}
          else if (a > h) {c += 2;}
     }

     cout << c << endl;
}
