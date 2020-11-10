/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
    vector<vector<int>> res;
    vector<int> tmp;
private:
    void backtracking(vector<int> candidates, int target, int sum ,int startIndex, vector<bool>used){
        if(sum == target){
            res.push_back(tmp);
            return ;
        }
        for(int i = startIndex; i < candidates.size() and sum + candidates[i] <= target; i++){
            if(i > 0 and candidates[i] == candidates[i-1] and used[i-1] == false)
                continue;
            sum += candidates[i];
            tmp.push_back(candidates[i]);
            used[i] = true;
            backtracking(candidates, target, sum, i+1, used);
            used[i] = false;
            sum -= candidates[i];
            tmp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<bool>used(candidates.size(), false);
        res.clear();
        tmp.clear();
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0, 0, used);

        return res;
    }
};
// @lc code=end

