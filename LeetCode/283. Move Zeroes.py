class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """

        i = 0
        cnt = 0
        while i < len(nums):
            if nums[i] == 0:
                nums.pop(i)
                cnt += 1
            else:
                i += 1

        for i in range(cnt):
            nums.append(0)
