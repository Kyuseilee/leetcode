/*
 * @lc app=leetcode.cn id=908 lang=cpp
 *
 * [908] 最小差值 I
 */

// @lc code=start
class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int n = A.size();
        int min_val = A[0];
        int max_val = A[0];
        for(int i = 0; i < A.size(); i++){
            if(A[i] < min_val)
                min_val = A[i];
            else if(A[i] > max_val)
                max_val = A[i];
        }
        int res = max_val - min_val - 2*K;
        return res < 0? 0:res;
    }
};
// @lc code=end

