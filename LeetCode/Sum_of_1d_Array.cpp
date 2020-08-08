class Solution {
    public:
        vector<int> runningSum(vector<int>& nums) {
            vector<int> out;
            for (int i=0; i<nums.size(); ++i) {
                int cnt=0;
                for (int j=i; j>=0; --j) {
                    cnt+=nums[j];
                }
                out.push_back(cnt);
            }
            return out;
        }
};
