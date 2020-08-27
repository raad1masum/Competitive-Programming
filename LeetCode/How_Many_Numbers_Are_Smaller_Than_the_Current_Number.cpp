class Solution {
    public:
        vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            vector<int> out; 

            for (int i=0; i<nums.size(); ++i) {
                int cnt=0; 
                for (int j=0; j<nums.size(); ++j) {
                    if (i!=j && nums[i]>nums[j])
                        ++cnt;
                }
                out.push_back(cnt);
            }

            return out;
        }
};
