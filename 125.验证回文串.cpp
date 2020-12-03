/*
 * @lc app=leetcode.cn id=125 lang=cpp
 *
 * [125] 验证回文串
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0)
            return true;
        int left = 0, right = s.size() -1;
        while(left < right){
            while(left < right and !isalnum(s[left]))
                left++;
            while(left < right and !isalnum(s[right]))
                right--;
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;

    }
};
// @lc code=end

