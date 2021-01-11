/*
 * @lc app=leetcode.cn id=917 lang=cpp
 *
 * [917] 仅仅反转字母
 */

// @lc code=start
class Solution {
public:
    string reverseOnlyLetters(string S) {
        int left = 0;
        int right = S.size()-1;
        while(left < right){
            while(left < right and !isalpha(S[left]))
                left++;
            while(left < right and !isalpha(S[right]))
                right--;
            if(left >= right)
                break;
            swap(S[left], S[right]);
            left++;
            right--;
        }
        return S;
    }
};
// @lc code=end

