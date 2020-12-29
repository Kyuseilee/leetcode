/*
 * @lc app=leetcode.cn id=1556 lang=cpp
 *
 * [1556] 千位分隔数
 */

// @lc code=start
class Solution {
public:
    string thousandSeparator(int n) {
        string s = to_string(n);
        if(s.size() < 4)
            return s;
        int count = 0;
        int head = s.size() % 3;
        string res = "";
        int start = 0;
        if(head){
            while(head){
                res += s[start];
                head--;
                start++;
            }
            res += ".";
        }
        for(int i = start; i < s.size(); i++){
            res += s[i];
            count++;
            if(count == 3 and i+1 <s.size()){
                res += ".";
                count = 0;
            }
        }
        return res;
    }
};
// @lc code=end

