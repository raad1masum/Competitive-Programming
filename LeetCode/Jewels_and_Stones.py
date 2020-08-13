class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        d = {}
        for letter in J:
            d[letter] = 1
        
        count = 0
        for letter in S:
            if letter in d:
                count += 1
        return count