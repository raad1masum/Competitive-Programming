class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """

        if len(s) == 1 or s[0] == ")" or s[0] == "]" or s[0] == "}":
            return False

        stack = []
        hashmap = {')': '(', '}': '{', ']': '['}

        for c in s:
            if c in hashmap:
                if stack and hashmap[c] == stack[-1]:
                    stack.pop()
                else:
                    return False
            else:
                stack.append(c)
        
        return True if not stack else False
