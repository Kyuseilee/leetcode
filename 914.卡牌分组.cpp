/*
 * @lc app=leetcode.cn id=914 lang=cpp
 *
 * [914] 卡牌分组
 */

// @lc code=start
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>com;

        int min_count = INT_MAX;
        for(auto num : deck){
            com[num] += 1;
        }

        for(auto item : com){
            if(item.second  < 2)
                return false;
            min_count = min(min_count, item.second);
        }
        for(auto item :com){
            if(item.second != min_count){
                int tmp = item.second;
                while(tmp % min_count != 0){
                    int min_divide = tmp % min_count;
                    tmp = min_count;
                    min_count = min_divide;
                }
                break;
            }
        }
        if(min_count == 1)
            return false;
        for(auto item: com){
            if(item.second % min_count != 0){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

