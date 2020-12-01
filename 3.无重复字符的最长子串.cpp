/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string res = "";
        int count = 0;
            int i = 0;
        string::size_type idx;
        while(i < s.size()){
            idx = res.find(s[i]);
            cout << idx<<"\n";
            if(idx == string::npos){
                res += s[i];
                cout << res <<"\n";
            }
            else
            {
                int length = res.size();
                count = max(count, length);
                res = s[i];
            }
            i++;
        }
        
        return count  < res.size()? res.size() : count;

    }
};
// @lc code=end

