/*
 * @lc app=leetcode.cn id=567 lang=cpp
 *
 * [567] 字符串的排列
 */

// @lc code=start
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int>cmp;
        unordered_map<char,int>traverse;
        for(auto ch :s1)
            cmp[ch] +=1;
        int left = 0, right = s1.size();
        traverse = cmp;
        while(right <= s2.size())
        {
            bool flag = false;
            for(int i = left; i < right; i++)
            {
                if(!traverse[s2[i]])
                {
                    left++;
                    right++;
                    traverse = cmp;
                    flag = true;
                    break;
                }
                traverse[s2[i]] -= 1;
            }
            if(!flag)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end

