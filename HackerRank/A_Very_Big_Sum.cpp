#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
    long total = 0;
    
    for(int i=0; i<ar.size(); ++i)
        total += ar[i];
    
    return total;
}
