/*
 * @lc app=leetcode.cn id=48 lang=cpp
 *
 * [48] 旋转图像
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int tmpi, tmpj;
        for(int i = 0; i < matrix.size(); i++){
            tmpi = matrix[i][0];
            for(int j = i; j < matrix[i].size(); j++){
                tmpj = matrix[i][j];
                matrix[i][j] = tmpi;
                tmpi = tmpj;
            }
            matrix[i][0] = tmpj;
        }
        return ;
        
    }
};
// @lc code=end

