#include <bits/stdc++.h>

using namespace std;

int returnVal(char x)
{
    return (int)x - 96;
}

int main()
{
    vector<int> v1;
    for (int i=0; i<26; ++i)
    {
        int x; cin >> x;
        v1.push_back(x);
    }

    string word; cin >> word;
    vector<int> v2;
    for (int i=0; i<word.length(); ++i)
        v2.push_back(v1[returnVal(word[i])-1]);

    cout << *max_element(v2.begin(), v2.end())*word.length() << endl;
}
