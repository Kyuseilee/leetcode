#
# @lc app=leetcode.cn id=36 lang=python
#
# [36] 有效的数独
#

# @lc code=start
class Solution(object):
    def isValidSudoku(self, board):
        """
        :type board: List[List[str]]
        :rtype: bool
        """
        for i in range(9):
            for j in range(9):
                if board[i].count(board[i][j]) >1 or board[i][j].count(board[i][j]) > 1:
                    return False
        return True
# @lc code=end

