class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """

        words = []
        i = 0
        while i < len(s):
            if s[i] == ' ':
                i += 1
                continue
            itr = i
            add = ""
            while itr != len(s) and s[itr] != ' ':
                add += s[itr]
                itr += 1
            words.append(add)
            i = itr

        out = ""
        for i in range(len(words)):
            out += words[len(words) - i - 1] + ' '
        out = out[:-1]

        return out
        
