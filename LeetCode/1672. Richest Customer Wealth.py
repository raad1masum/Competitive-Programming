class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """

        out = 0

        for i in range(len(accounts)):
            rsum = 0

            for j in range(len(accounts[i])):
                rsum += accounts[i][j]
            
            if rsum > out:
                out = rsum

        return out
