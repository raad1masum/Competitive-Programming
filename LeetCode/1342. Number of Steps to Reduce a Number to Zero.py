class Solution(object):
    def numberOfSteps(self, num):
        """
        :type num: int
        :rtype: int
        """

        out = 0
        curr = num

        while curr != 0:
            if curr % 2 == 0:
                curr = curr / 2
            else:
                curr -= 1
            out += 1
        
        return out
