class Solution(object):
    def longestOnes(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """

        if len(nums) == k:
            return k

        l, r, k_count, curr_sum, out = 0, 0, 0, 0, 0

        while r != len(nums):
            if nums[r] == 1:
                curr_sum += 1
                r += 1
            elif nums[r] == 0 and k_count < k:
                curr_sum += 1
                k_count += 1
                r += 1
            elif nums[r] == 0 and k_count >= k:
                if nums[l] == 0:
                    k_count -= 1
                curr_sum -= 1
                l += 1
            else:
                l += 1
                r += 1
            out = max(out, curr_sum)

        return out
            
