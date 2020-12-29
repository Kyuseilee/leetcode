/*
 * @lc app=leetcode.cn id=844 lang=cpp
 *
 * [844] 比较含退格的字符串
 */

// @lc code=start
class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int starts = 0;
        int startt = 0;
        string ss = "";
        string st = "";
        for(auto ch : S){
            if(ch == '#')
            {
                if(ss.empty())
                    continue;
                else{
                    ss.erase(ss.end()-1);
                }
            }
            else{
                ss += ch;
            }
        }
        for(auto ch : T){
            if(ch == '#')
            {
                if(st.empty())
                    continue;
                else{
                    st.erase(st.end()-1);
                }
            }
            else{
                st += ch;
            }
        }
        return ss == st;
    }
};
// @lc code=end

