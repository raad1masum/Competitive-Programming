class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """

        count = 0
        out = []

        for i in range(len(nums)):
            count = count + nums[i]
            out.append(count)

        return out
