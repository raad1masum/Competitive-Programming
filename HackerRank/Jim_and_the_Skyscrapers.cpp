#include <bits/stdc++.h>
using namespace std;

int a[300001];
int b[300001];

void printNGE(std::vector<int> & v, int n)
{
    stack <int> s;
    s.push(0);
    
    for(int i = 1 ; i < n ; i++)
    {
        while (! s.empty() && v[s.top()] <= v[i])
        {
            a[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    
    while( ! s.empty())
    {
        a[s.top()]=-1;
        s.pop();
    }
}
int main(int argc, char const *argv[])
{
    int n,i;
    cin >> n;
    std::vector <int> v(n);
    for(i = 0 ; i < n ; i++) 
        cin >> v[i];
    printNGE(v, n);
    
    long long int ans=0;
    for(i = 0 ; i < n ; i++) 
    {
        if(v[i] == v[a[i]])
            b[a[i]] = b[i] + 1;
    }
        for(i = 0 ; i < n ; i++)
           ans += b[i];
       cout << 2 * ans;
    return 0;
}
