class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """

        arr = sorted(nums)
        out = []

        for i in range(len(arr)):
            if i > 0 and arr[i] == arr[i - 1]:
                continue
            
            l, r = i + 1, len(arr) - 1
            while l < r:
                if arr[i] + arr[l] + arr[r] > 0:
                    r -= 1
                elif arr[i] + arr[l] + arr[r] < 0:
                    l += 1
                else:
                    out.append([arr[i], arr[l], arr[r]])
                    l += 1
                    r -= 1
                    while arr[l] == arr[l - 1] and l < r:
                        l += 1

        return out
