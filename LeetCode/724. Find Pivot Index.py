class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        tsum = 0
        for i in nums:
            tsum += i
        
        lsum = 0

        for i in range(len(nums)):
            if tsum - lsum - nums[i] == lsum:
                return i
            
            lsum += nums[i]
        
        return -1
        
