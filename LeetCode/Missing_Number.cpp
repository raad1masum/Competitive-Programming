class Solution {
  public:
  int missingNumber(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(), nums.end());
    int out;

    for (int i=0; i<nums.size(); ++i) {
      if (nums[i]!=i) {
        out=i;
        break;
      }
    }

    return out;
  }
};