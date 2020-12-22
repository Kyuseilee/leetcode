/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int min_val = candidates[0];
        vector<vetor<int>> res;
        vector<int> tmp;
        for(int i = candidates.size(); i >= 0; i--){
            if(target - candidates[i] == 0){
                tmp.push_back(candidates[i]);
                res.push_back(tmp);
                tmp.clear();
            }
            else if(target - candidates[i] < min_val){
                tmp.clear();
            }
            else{
                tmp.push_back(candidates[i]);
            }
        }

    }
};
// @lc code=end

