/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>res(n, vector<int>(n,0));
        int count = 1;

        int row_length = n-1;
        int columns_length = n-1;
        int start = 0;
        int cur_row = 0;
        int cur_columns = 0; 

        while(cur_row <= row_length and cur_columns  <= columns_length){
            while(start <= columns_length){
                res[cur_row][start] = count++;
                start++;
            }
            cur_row++;
            start = cur_row;

            if(cur_row > row_length)
                break;
            while(start <= row_length){
                res[start][columns_length] = count++;
                start++;
            }

            columns_length--;
            start = columns_length;
            if(cur_columns > columns_length)
                break;

            while(start >= cur_columns){
                res[row_length][start] = count++;
                start--;
            }

            row_length--;
            start = row_length;

            while(start >= cur_row){
                res[start][cur_columns] = count++;
                start--;
            }
            cur_columns++;
            start = cur_columns;
        }

        return res;
    }
};
// @lc code=end

