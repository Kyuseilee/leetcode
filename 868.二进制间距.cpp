/*
 * @lc app=leetcode.cn id=868 lang=cpp
 *
 * [868] 二进制间距
 */

// @lc code=start
class Solution {
public:
    int binaryGap(int n) {
        string res = "";
        int max_interval = 0;
        int fast = 0, slow = 0;
        while(n){
            if(n%2 == 1)
            {
                if(res[slow] == '1')
                    max_interval = max(max_interval, fast-slow);
                slow = fast;
            }
            res += to_string(n%2);
            n /= 2;
            fast++;
        }
        return max_interval;
    }
};
// @lc code=end

