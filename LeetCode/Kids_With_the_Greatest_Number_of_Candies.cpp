class Solution {
    public:
        vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
            vector<bool> out;

            for (int i=0; i<candies.size(); ++i) {
                bool isBigger = true;
                for (int j=0; j<candies.size(); ++j) {
                    if (candies[i]+extraCandies < candies[j]) {
                        isBigger = false;
                    }
                }
                out.push_back(isBigger);
            }

            return out;
        }
};
