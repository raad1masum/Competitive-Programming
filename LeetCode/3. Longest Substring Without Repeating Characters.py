class Solution(object):
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """

        charset = set()
        l = 0
        most = 0

        for i in range(len(s)):
            while s[i] in charset:
                charset.remove(s[l])
                l += 1
            charset.add(s[i])
            most = max(most, i - l + 1)

        return most
            
            
