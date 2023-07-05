class Solution(object):
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """

        v = ['a','e','i','o','u']

        max_sum = 0

        for i in range(k):
            if s[i] in v:
                max_sum += 1

        curr_sum = max_sum
        
        for i in range(k, len(s)):
            if s[i] in v:
                curr_sum += 1
            if s[i-k] in v:
                curr_sum -= 1
            max_sum = max(max_sum, curr_sum)
        
        return max_sum
