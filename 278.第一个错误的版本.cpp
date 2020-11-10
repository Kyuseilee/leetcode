/*
 * @lc app=leetcode.cn id=278 lang=cpp
 *
 * [278] 第一个错误的版本
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int l = 0, r = n;
        while(l <= r){
            int mid = (l +r) / 2;
            if(isBadVersion(mid) == true)
            {
                if(isBadVersion(mid-1) == false)
                    return mid;
                r = mid - 1;

            }
            else{
                l = mid + 1;
            }
        }
        return 0;
        
    }
};
// @lc code=end

