/*
 * @lc app=leetcode.cn id=670 lang=cpp
 *
 * [670] 最大交换
 */

// @lc code=start
class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        string tmp = s;
        sort(s.begin(), s.end());
        int index1= 0, index2= 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != tmp[i])
            {
                index1= i;
                index2 = i;
                break;
            }
        }
        
    }
};
// @lc code=end

