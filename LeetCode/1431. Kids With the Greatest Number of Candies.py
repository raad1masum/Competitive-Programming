class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """

        top = candies[0]

        for i in range(len(candies)):
            if candies[i] > top:
                top = candies[i]
        
        out = []

        for i in range(len(candies)):
            if candies[i] + extraCandies >= top:
                out.append(True)
            else:
                out.append(False)

        return out
