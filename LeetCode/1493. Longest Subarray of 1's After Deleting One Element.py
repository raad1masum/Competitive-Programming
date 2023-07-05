class Solution(object):
    def longestSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """

        l, r, curr, out, z = 0, 0, 0, 0, 0

        while r != len(nums):
            if nums[r] == 1:
                curr += 1
                r += 1
            elif nums[r] == 0 and z == 0:
                r += 1
                z += 1
            elif nums[r] == 0 and z == 1:
                if nums[l] == 0:
                    z -= 1
                else:
                    curr -= 1
                l += 1
            else:
                r += 1
                l += 1
            out = max(out, curr)
        
        if out == len(nums):
            return out - 1
        
        return out
