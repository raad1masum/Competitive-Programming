class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """

        hashmap = collections.defaultdict(int)

        for i in range(len(nums)):
            hashmap[nums[i]] += 1

        return sorted(hashmap, key=hashmap.get, reverse=True)[0:k]
