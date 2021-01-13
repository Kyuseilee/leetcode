/*
 * @lc app=leetcode.cn id=1005 lang=cpp
 *
 * [1005] K 次取反后最大化的数组和
 */

// @lc code=start
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        sort(A.begin(), A.end());
        int pos = 0;
        while(K){
            if(A[pos] < 0){
                if(A[pos+1] > 0)
                {
                    if(abs(A[pos]) < A[pos+1])
                    {
                        if(K%2 == 1)
                        {
                            A[pos] = -A[pos];
                        }
                        break;
                    }
                }
                A[pos] = -A[pos];
                K--;
                pos++;
            }
            else{
                if(K % 2 == 1)
                    A[pos] = -A[pos];
                break;
            }
        }
        int sum = 0;
        for(int num : A){
            cout << num << " ";
            sum += num;
        }
        return sum;
    }
};
// @lc code=end

