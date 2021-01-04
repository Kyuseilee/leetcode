/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int start = 1;
        int count = 1;
        if(deck[start] == deck[0])
        {
            while(deck[start] == deck[0]){
                start++;
                count++;
            }
        }
        if(count == 1)
            return false;
        int cur = 1;
        int com = start;
        start++;
        while(start < deck.size()){
            while(deck[start] == deck[com]){
                start++;
                cur++;
            }
            if(cur != count)
                return false;
            cur = 1;
            com = start;
            start++;
        }
        return true;
    }
};
// @lc code=end

