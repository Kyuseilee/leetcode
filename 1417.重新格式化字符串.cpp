/*
 * @lc app=leetcode.cn id=1417 lang=cpp
 *
 * [1417] 重新格式化字符串
 */

// @lc code=start
class Solution {
public:
    string reformat(string s) {
        stack<char> com;
        string res = "";
        int slow= 0, fast = 1;
        bool flag = false;
        res += s[0];
        if(s[0] >= '0' and s[0] <= '9')
            flag = true;
        while(fast < s.size()){
            if(flag){
                com.push(s[fast]);
                flag = false;
            }
            else{
                res += s[fast];
                flag = true;
            }
            fast++;
        }
        if(com.size() > 1)
            return "";
        return res + com.top();
    }
};
// @lc code=end

