/*
 * @lc app=leetcode.cn id=1128 lang=cpp
 *
 * [1128] 等价多米诺骨牌对的数量
 */

// @lc code=start
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        sort(dominoes.begin(), dominoes.end());
        vector<int> com = dominoes[0];
        int count = 0;
        for(int i = 0; i < dominoes.size(); i++){
            if(dominoes[i] == com)
                count++;
            else{
                com = dominoes[i];
            }
        }
        return count;

    }
};
// @lc code=end

