/*
 * @lc app=leetcode.cn id=999 lang=cpp
 *
 * [999] 可以被一步捕获的棋子数
 */

// @lc code=start
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int count = 0;
        int left, right;
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == 'R'){
                    left = i;
                    right = j;
                    break;
                }
            }
        }
        int sum = 0;
        for(int j = right-1; j >= 0; j--){
            if(board[left][j] == 'p')
                count = 1;
            else if(board[left][j] == 'B')
                break;
        }
        sum += count;
        count = 0;
        for(int j = right+1; j < board[0].size(); j++){
            if(board[left][j] == 'p')
                count = 1;
            else if(board[left][j] == 'B')
                break;
        }
        sum += count;
        count = 0;
        for(int i = left; i >= 0; i--){
            if(board[i][right] == 'p')
                count = 1;
            else if(board[i][right] == 'B')
                break;
        }
        sum += count;
        count = 0;
        for(int i = left+1; i < board.size(); i++){
            if(board[i][right] == 'p')
                count = 1;
            else if(board[i][right] == 'B')
                break;
        }
        sum += count;
        return sum;
    }
};
// @lc code=end

