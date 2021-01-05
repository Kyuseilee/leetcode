/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row_length = matrix.size()-1;
        int columns_length = matrix[0].size()-1;
        int start = 0;
        int cur_row = 0;
        int cur_columns = 0; 
        vector<int> res;
        int count = 0;
        while(cur_row <= row_length and cur_columns  <= columns_length){
            while(start <= columns_length){
                res.push_back(matrix[cur_row][start]);
                start++;
            }
            cur_row++;
            start = cur_row;

            if(cur_row > row_length)
                break;
            while(start <= row_length){
                res.push_back(matrix[start][columns_length]);
                start++;
            }

            columns_length--;
            start = columns_length;
            if(cur_columns > columns_length)
                break;

            while(start >= cur_columns){
                res.push_back(matrix[row_length][start]);
                start--;
            }

            row_length--;
            start = row_length;

            while(start >= cur_row){
                res.push_back(matrix[start][cur_columns]);
                start--;
            }
            cur_columns++;
            start = cur_columns;
        }
        return res;

    }
};
// @lc code=end

