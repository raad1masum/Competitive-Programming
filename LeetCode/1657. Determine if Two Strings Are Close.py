class Solution(object):
    def closeStrings(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: bool
        """

        if len(word1) != len(word2):
            return False
        
        d1 = dict()
        d2 = dict()

        for i in word1:
            if i in d1:
                d1[i] += 1
            else:
                d1[i] = 1
        
        for i in word2:
            if i in d2:
                d2[i] += 1
            else:
                d2[i] = 1
        
        if sorted(d1.values()) == sorted(d2.values()) and sorted(d1.keys()) == sorted(d2.keys()):
            return True
        else:
            return False
