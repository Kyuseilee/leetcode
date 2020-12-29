/*
 * @lc app=leetcode.cn id=1431 lang=cpp
 *
 * [1431] 拥有最多糖果的孩子
 */

// @lc code=start
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int max_val = *max_element(candies.begin(), candies.end());
        for(auto num : candies){
            if(num + extraCandies >= max_val)
                res.push_back(true);
            else
            {
                res.push_back(false);
            }
        }
        return res;

    }
};
// @lc code=end

