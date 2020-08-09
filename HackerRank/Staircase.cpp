#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i, k, j;
    for (i=1; i<=n; ++i)
    {
        for (k=0; k<n-i; ++k)
            cout << " ";
        for (j=1; j<=n-k; ++j)
            cout << "#";
        cout << endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
