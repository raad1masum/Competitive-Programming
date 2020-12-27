class Solution {
public:
  int singleNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int out;
    
    if (nums.size()>1) {
      for (int i=0; i<nums.size(); ++i) {
        if (nums[i]==nums[i+1]) {
          ++i;
        } else {
          out=nums[i];
        }
      }
      return out;
    } else {
      return nums[0];
    }
  }
};