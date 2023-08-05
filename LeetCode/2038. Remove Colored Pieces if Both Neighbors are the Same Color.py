class Solution(object):
    def winnerOfGame(self, colors):
        """
        :type colors: str
        :rtype: bool
        """
        acnt = 0
        bcnt = 0

        for i in range(1, len(colors)-1):
            if colors[i-1] == 'A' and colors[i] == 'A' and colors[i+1] == 'A':
                acnt += 1
                i += 1
            if colors[i-1] == 'B' and colors[i] == 'B' and colors[i+1] == 'B':
                bcnt += 1
                i += 1
        
        if acnt > bcnt:
            return True
        else:
            return False
