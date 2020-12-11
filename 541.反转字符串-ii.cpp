/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.size();
        string res = "";
        string tmp = "";
        for(int i = 0; i < n ; i++){
            tmp += s[i];
            if(tmp.size() / k == 2){
                reverse(tmp.begin(), tmp.begin()+k);
                res += tmp;
                tmp = "";
            }
        }
        if(tmp.size() < k){
            reverse(tmp.begin(), tmp.end());
            res += tmp;
        }
        else if(tmp.size() < 2*k and tmp.size() >= k){
            reverse(tmp.begin(), tmp.begin() + k);
            res += tmp;
        }
        return res;


    }
};
// @lc code=end

