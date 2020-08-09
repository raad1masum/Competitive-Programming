#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


int max_of_four(int a, int b, int c, int d)
{
    int x[] = {a, b, c, d};
    int temp = a;
    for (int i=0; i<4; ++i)
        if (x[i] > temp) temp = x[i];
    return temp;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

