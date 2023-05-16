class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """

        diff = 0
        min = 100000

        for i in range(len(prices)):
            if prices[i] < min:
                min = prices[i]
            
            if prices[i] - min > diff:
                diff = prices[i] - min

        return diff
