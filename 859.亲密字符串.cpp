/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size()){
            return false;
        }
        int slow = 0, fast = 0;
        while(fast < A.size())
        {
            while(A[fast] == B[fast])
                fast++;
            if(fast >= A.size()){
                swap(A[slow], A[fast-1]);
                return A == B;
            }
            slow = fast;
            fast++;
            while(A[fast] == B[fast])
                fast++;
            swap(A[slow], A[fast]);
            if(A == B)
                return true;
        }
        return A == B;

    }
};
// @lc code=end

