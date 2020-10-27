/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> numbers;
        for(int i = 0; i < numRows; i++){
            numbers.push_back(vector<int>(i+1, 1));
        }
        for(int i = 0; i < numRows; i++){
            for(int j = 1; j<i; j++){
                numbers[i][j] = numbers[i-1][j-1] + numbers[i-1][j];
            }
        }
        return numbers;
    }
};
// @lc code=end

