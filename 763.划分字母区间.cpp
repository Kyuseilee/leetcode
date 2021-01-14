/*
 * @lc app=leetcode.cn id=763 lang=cpp
 *
 * [763] 划分字母区间
 */

// @lc code=start
class Solution {
public:
    vector<int> partitionLabels(string S) {
        if(S.empty())
            return {};
        vector<int> res;
        unordered_map<char, int> cmp;
        for(int i = 0; i < S.size(); i++){
            cmp[S[i]] = i;
        }
        int left = 0, right = 0;
        for(int i = 0; i < S.size(); i++){
            right = max(right, cmp[S[i]]);
            if(i == right){
                res.push_back(right - left + 1);
                left = i+1;
            }
        }
        return res;
    }
};
// @lc code=end

