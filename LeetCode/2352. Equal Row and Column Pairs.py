class Solution(object):
    def equalPairs(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """

        r = list()
        c = list()

        for i in range(len(grid)):
            r.append(grid[i])
            for j in range(len(grid)):
                if i == 0:
                    c.append([grid[i][j]])
                else:
                    c[j].append(grid[i][j])
        
        out = 0

        for i in r:
            for j in c:
                if i == j:
                    out += 1
        
        return out
