/*
 * @lc app=leetcode.cn id=917 lang=cpp
 *
 * [917] 仅仅反转字母
 */

// @lc code=start
class Solution {
public:
    string reverseOnlyLetters(string S) {
        string res = "";
        stack<int> stk;
        int pointer = S.size()-1;
        for(auto ch : S){
            if(isalnum(ch))
                stk.push(ch);
            else{
                
                res += S[pointer];
                pointer--;
                res += ch;
            }
        }
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        return res;
    }

};
// @lc code=end

