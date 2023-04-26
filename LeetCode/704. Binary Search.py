class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """

        low_index = 0
        high_index = len(nums) - 1
        middle_index = (low_index + high_index) / 2

        if nums[middle_index] == target:
            return middle_index
        else:
            while nums[middle_index] != target:
                if high_index < low_index:
                    return -1
                
                middle_index = (low_index + high_index) / 2

                if nums[middle_index] == target:
                    return middle_index
                
                elif nums[middle_index] > target:
                    high_index = middle_index - 1
                elif nums[middle_index] < target:
                    low_index = middle_index + 1

        return -1
