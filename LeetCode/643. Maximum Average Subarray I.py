class Solution(object):
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        currsum = sum(nums[:k])
        max_sum = currsum

        for i in range(k, len(nums)):
            currsum += nums[i] - nums[i-k]
            max_sum = max(max_sum, currsum)
        
        return max_sum/float(k)
