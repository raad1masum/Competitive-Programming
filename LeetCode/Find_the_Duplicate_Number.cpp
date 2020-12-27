class Solution {
public:
  int findDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int out=nums[0];
    
    for (int i=0; i<nums.size(); ++i) {
      if (nums[i]==nums[i+1]) {
        out=nums[i];
        break;
      }
    }
    
    return out;
  }
};