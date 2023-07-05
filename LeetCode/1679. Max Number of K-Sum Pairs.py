class Solution(object):
    def maxOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """

        if len(nums) == 1:
            return 0

        arr = sorted(nums)

        l, r = 0, len(nums) - 1

        out = 0

        while l < r:
            if arr[l] + arr[r] < k:
                l += 1

            elif arr[l] + arr[r] > k:
                r -= 1

            else:
                l += 1
                r -= 1
                out += 1

        return out
