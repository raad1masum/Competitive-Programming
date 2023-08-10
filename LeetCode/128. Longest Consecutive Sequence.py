class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        x = set(nums)
        out = 0

        for i in range(len(nums)):
            if nums[i] - 1 not in x:
                cnt = 1
                tmp = nums[i]
                while tmp + 1 in x:
                    cnt += 1
                    tmp += 1
                out = max(out, cnt)
        
        return out
