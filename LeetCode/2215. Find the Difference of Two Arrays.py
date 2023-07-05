class Solution(object):
    def findDifference(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[List[int]]
        """

        out = [[],[]]

        for i in nums1:
            if i not in nums2 and i not in out[0]:
                out[0].append(i)
        
        for i in nums2:
            if i not in nums1 and i not in out[1]:
                out[1].append(i)

        return out
