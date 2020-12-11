/*
 * @lc app=leetcode.cn id=482 lang=cpp
 *
 * [482] 密钥格式化
 */

// @lc code=start
class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        stack<char> stk;
        for(int i = 0; i < S.size(); i++){
            if(S[i] != '-')
                stk.push(toupper(S[i]));
            S[i] = toupper(S[i]);
        }
        string s = "";
        int count = 0;
        int n = stk.size();
        int need = n / K;
        while(!stk.empty())
        {
            count++;
            char tmp = stk.top();
            stk.pop();
            s += tmp;
            if(count % K == 0 and !stk.empty())
            {
                s += '-';
                need--;
            }
            if(need == 0){
                while(!stk.empty())
                {
                    char tmp = stk.top();
                    stk.pop();
                    s += tmp;
                }
            }
        }
        reverse(s.begin(), s.end());
        return s;
    }
};
// @lc code=end

