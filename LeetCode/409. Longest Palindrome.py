class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """

        letters = {}

        for i in s:
            if i not in letters:
                letters[i] = 1
            else:
                letters[i] += 1
        
        print(letters)

        count = 0
        odd_count = 0
        for i in letters:
            # print(letters[i])
            print(letters[i] / 2)
            count += letters[i] / 2
            if letters[i] % 2 != 0:
                odd_count += letters[i]
        
        count = count * 2

        if odd_count > 0:
            count += 1

        return count
      
