/*
 * @lc app=leetcode.cn id=771 lang=cpp
 *
 * [771] 宝石与石头
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int>gem;
        for(int i = 0; i < S.size(); i++){
            gem[S[i]] += 1;
        }
        int count = 0;
        for(int i = 0; i<J.size(); i++)
            if(gem[J[i]])
                count += gem[J[i]];
        return count;

    }
};
// @lc code=end

