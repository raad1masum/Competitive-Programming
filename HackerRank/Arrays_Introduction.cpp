#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a; cin >> n;
    int arr[n];
    int temp[n];

    for (int i=0; i<n; ++i)
    {
        cin >> a;
        arr[i] = a;   
    }

    for (int j=0; j<n; ++j)
        temp[j] = arr[n-1-j];

    for (int k=0; k<n; ++k)
        cout << temp[k] << " ";

    cout << endl;

    return 0;
}
