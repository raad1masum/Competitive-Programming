class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        vector<vector<int>> out;
        for (int i=0; i<S.length(); ++i) {
            int j=i, cnt=1;
            while (S[j]==S[i]) {
                if (S[j+1]!=S[i]&&cnt>=3) {
                    vector <int> out1 = {i, j};
                    out.push_back(out1);
                    i=j;
                }
                ++cnt;
                ++j;
            }
        }
        return out;
    }
};
