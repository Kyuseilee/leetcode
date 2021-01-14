/*
 * @lc app=leetcode.cn id=922 lang=cpp
 *
 * [922] 按奇偶排序数组 II
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int left = 0, right = 1;
        while(left < A.size() and right < A.size()){
            while(left < A.size() and A[left] % 2 ==0){
                left+=2;
            }
            while(right <A.size()  and A[right] % 2 == 1){
                right += 2;
            }
            if(left >= A.size() or right >= A.size())
                break;
            swap(A[left], A[right]);
            left += 2;
            right += 2;
        }
        return A;
    }
};
// @lc code=end

