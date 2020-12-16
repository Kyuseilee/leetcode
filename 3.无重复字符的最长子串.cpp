/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string tmp = "";
        int max_length = 0;
        for(int i = 0; i < s.size(); i++){
            tmp += s[i];
            for(int j = i+1; j< s.size(); j++){
                if(tmp.find(s[j]) == tmp.npos){
                    tmp += s[j];
                }
                else{
                    break;
                }
            }
            int n = tmp.size();
            max_length = max(max_length, n);
            tmp = "";
            if(s.size() - i < max_length)
                break;
        }
        return max_length;
    }
};
// @lc code=end

