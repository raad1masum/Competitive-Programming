class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """

        itr = len(word1)
        len2 = len(word2)

        if itr > len2:
            itr = len2

        out = ""
        
        for i in range(itr):
            out += word1[i] + word2[i]

        if len(word1) == len(word2):
            return out
        if itr == len(word1):
            out += word2[itr:-1] + word2[-1]
        if itr == len(word2):
            out += word1[itr:-1] + word1[-1]

        return out
