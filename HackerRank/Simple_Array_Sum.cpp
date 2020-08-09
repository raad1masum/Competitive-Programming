#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    int val = 0;
    for (int i=0; i<ar.size(); ++i)
        val += ar[i];
    return val;
}
