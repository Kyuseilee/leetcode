/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() < 2)
            return s;
        string result = "";
        for(int i = 0; i < s.size(); i++)
        {
            int left = i, right = i;
            while(left > 0 and s[left-1] == s[i])
                left--;
            while(right < s.size()-1 and s[right+1] == s[i])
                right++;
            cout << left << " " << right << "\n";
            bool flag =false;
            while(left >=0 and right < s.size())
            {
                if(s[left] != s[right])
                {
                    flag = true;
                    break;
                }
                if(left == 0 or right == s.size()-1)
                    break;
                left--;
                right++;
            }
            if(flag)
            {
                left += 1;
                right -= 1;
            }
            string tmp = s.substr(left, right-left+1);
            if(tmp.size() > result.size())
                result = tmp;
        }
        return result;
    }
};
// @lc code=end

