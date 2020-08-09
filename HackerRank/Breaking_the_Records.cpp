#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    vector<int> scores;

    for (int i=0; i<n; ++i)
    {
        int x; cin >> x;
        scores.push_back(x);
    }

    int highCnt=0;
    int lowCnt=0;
    int high=scores[0];
    int low=scores[0];

    for (int i=0; i<n; ++i)
    {
        if (scores[i]>high)
        {
            high = scores[i];
            ++highCnt;
        }
        if (scores[i]<low)
        {
            low = scores[i];
            ++lowCnt;
        }
    }

    cout << highCnt << " " << lowCnt << endl;
}
