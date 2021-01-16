/*
 * @lc app=leetcode.cn id=1128 lang=cpp
 *
 * [1128] 等价多米诺骨牌对的数量
 */

// @lc code=start
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> com;
        int count = 0;
        unordered_map<vector<int>, int> mp;
        for(int i = 0; i < dominoes.size(); i++){
            sort(dominoes[i].begin(), dominoes[i].end());
            mp[dominoes[i]] += 1;
        }
        for(int i = 0; i < dominoes.size(); i++){
            for(int j = 0; j < dominoes.size(); j++){
                if(mp[j]){
                    count++;
                }
            }
        }
        return count;

    }
};
// @lc code=end

