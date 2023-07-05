class Solution(object):
    def uniqueOccurrences(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """

        m = {}

        for i in range(len(arr)):
            if arr[i] in m:
                m[arr[i]] += 1
            else:
                m[arr[i]] = 1
        
        occ = []

        for i in m.items():
            if i[1] in occ:
                return False
            occ.append(i[1])

        return True
