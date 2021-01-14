/*
 * @lc app=leetcode.cn id=925 lang=cpp
 *
 * [925] 长按键入
 */

// @lc code=start
class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int left = 0;
        int right = 0;
        int count = 0;
        while(left < name.size()){
            while(right < typed.size() and typed[right] ==name[left])
            {
                right++;
                count++;
            }
            left++;
            while(left < name.size() and name[left] == name[left-1])
            {
                left++;
                count--;
            }
            if(count <= 0)
                return false;
            count = 0;
        }
        return right == typed.size();
    }
};
// @lc code=end

