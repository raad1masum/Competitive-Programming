class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        l, r = 1, 1

        out = [1] * len(nums)

        for i in range(len(nums)):
            out[i] *= l
            l *= nums[i]
            out[len(nums) - i - 1] *= r
            r *= nums[len(nums) - i - 1]
        
        return out
