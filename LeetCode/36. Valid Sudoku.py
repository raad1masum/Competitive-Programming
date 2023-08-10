class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """

        for row in board:
            hashmap = []
            for num in row:
                if num != "." and num in hashmap:
                    return False
                hashmap.append(num)
        
        for i in range(9):
            hashmap = []
            for j in range(9):
                if board[j][i] != "." and board[j][i] in hashmap:
                    return False
                hashmap.append(board[j][i])
        
        for i in range(0, 9, 3):
            
            for j in range(0, 9, 3):
                hashmap = []
                for k in range(3):
                    for l in range(3):
                        if board[i+k][j+l] != "." and board[i+k][j+l] in hashmap:
                            return False
                        hashmap.append(board[i+k][j+l])

        return True
