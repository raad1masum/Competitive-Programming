class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """

        min1 = 9999999999999
        min2 = 9999999999999

        for i in range(len(nums)):
            if nums[i] < min1:
                min1 = nums[i]
            
            if min1 < nums[i] and nums[i] < min2:
                min2 = nums[i]
            
            if min1 < min2 and min2 < nums[i]:
                return True

        return False
