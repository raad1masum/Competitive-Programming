class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """

        if len(s) == 0:
            return True

        index = 0
        cnt = 0

        for i in range(len(t)):
            if t[i] == s[index]:
                index += 1
                cnt += 1
            if cnt == len(s):
                return True
        
        return False
