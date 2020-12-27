/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>>res;
    vector<int> tmp;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        res.clear();
        tmp.clear();
        backtracking(candidates, target, 0, 0);
        return res;
    }
    void backtracking(vector<int>&candidates, int target, int index, int sum){
        if(target == sum){
            sum = 0;
            res.push_back(tmp);
            return ;
        }
        while(index < candidates.size()){
            if(sum + candidates[index] <= target)
            {
                sum += candidates[index];
                tmp.push_back(candidates[index]);
                backtracking(candidates, target, index+1, sum);
                sum -= candidates[index];
                tmp.pop_back();
            }
            while(index+1 < candidates.size() and candidates[index+1] == candidates[index])
                index++;
            index++;
        }
    }
};
// @lc code=end

