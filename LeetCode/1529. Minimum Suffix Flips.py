class Solution(object):
    def minFlips(self, target):
        """
        :type target: str
        :rtype: int
        """
        curr = '0'
        cnt = 0

        for i in range(len(target)):
            if target[i] != curr:
                cnt += 1
                curr = target[i]
        
        return cnt
