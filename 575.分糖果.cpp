/*
 * @lc app=leetcode.cn id=575 lang=cpp
 *
 * [575] 分糖果
 */

// @lc code=start
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> com;
        for(auto candy : candyType){
            com[candy] += 1;
        }
        int candylenth = com.size();
        return candylenth > candyType.size() / 2? candyType.size() / 2 : candylenth;

    }
};
// @lc code=end

