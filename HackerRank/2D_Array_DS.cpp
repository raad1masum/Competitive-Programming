#include <bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>> arr)
{    
    int sum=-99999999;
    for (int i=0; i<=3; ++i)
    {
        for (int j=0; j<=3; ++j)
        {
            int tempSum=0;
            tempSum+=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            sum=max(tempSum, sum);
        }
    }
    return sum;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i=0; i<6; ++i)
    {
        arr[i].resize(6);
        for (int j=0; j<6; ++j)
            cin >> arr[i][j];
    }
    int result = solve(arr);
    cout << result << endl;
}
