/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int start = 0, rows = matrix.size()-1;
        while(start < rows){
            vector<int> tmp = matrix[start];
            matrix[start] = matrix[rows];
            matrix[rows] = tmp;
            start++;
            rows--;
        }
        for(int i = 0; i < matrix.size()-1; i++){
            for(int j = i+1; j < matrix[0].size(); j++){
                int tmp = matrix[j][i];
                matrix[j][i] = matrix[i][j];
                matrix[i][j] = tmp;
            }
        }
        return ;
        
    }
};
// @lc code=end

