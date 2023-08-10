class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """

        hashmap = collections.defaultdict(list)

        for i in range(len(strs)):
            hashmap[tuple(sorted(strs[i]))].append(strs[i])

        out = []
        for arr in hashmap.values():
            out.append(arr)
        
        return out
