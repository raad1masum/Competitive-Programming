class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for i,ele in enumerate(nums):
            if ele in d:    return [d[ele], i]
            d[target-ele]=i