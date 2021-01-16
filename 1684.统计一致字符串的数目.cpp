/*
 * @lc app=leetcode.cn id=1684 lang=cpp
 *
 * [1684] 统计一致字符串的数目
 */

// @lc code=start
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<int>st;
        for(auto ch : allowed)
        {
            st.insert(ch);
        }
        int count = 0;
        for(auto word : words)
        {
            bool flag = false;
            for(auto ch : word)
            {
                if(!st.count(ch))
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                count++;
            }
        }
        return count;
    }
};
// @lc code=end

