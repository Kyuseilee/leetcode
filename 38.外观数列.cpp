/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 外观数列
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";

        string previous = countAndSay(n - 1), result = "";
        int count = 1;
        for(int i = 0; i < previous.length(); i++){
            if(previous[i] == previous[i+1])
                count++;
            else
            {
                result += to_string(count) + previous[i];
                count = 1;
            }
        }
        return result;
    }
};
// @lc code=end

