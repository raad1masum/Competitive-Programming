class Solution(object):
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = ['a','e','i','o','u','A','E','I','O','U']
        s_vowels =[]

        out = s

        for i in range(len(s)):
            for j in vowels:
                if s[i] == j:
                    s_vowels.append(s[i])

        itr = len(s_vowels) - 1
        for i in range(len(s)):
            for j in vowels:
                if s[i] == j:
                    out = out[:i] + s_vowels[itr] + out[i+1:]
                    itr -= 1

        return out
