class Solution(object):
    def removeStars(self, s):
        """
        :type s: str
        :rtype: str
        """

        t = ''

        for i in range(len(s)):
            if s[i] != '*':
                t += s[i]
            else:
                t = t[:len(t)-1]
            
        return t
