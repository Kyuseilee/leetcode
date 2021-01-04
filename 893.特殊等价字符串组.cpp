/*
 * @lc app=leetcode.cn id=893 lang=cpp
 *
 * [893] 特殊等价字符串组
 */

// @lc code=start
class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        int start = 0;
        int count = 0;
        int max_count = 0;
        while(start < A.size()){
            string cur = A[start] + A[start];
            int fast = start +1;
            count = 0;

            while(fast < A.size() and cur.find(A[fast]) != cur.npos){
                cout << A[fast] << " ";
                count++;
                fast++;
            }
            max_count += count;
            start = fast;
        }
        return max_count;

    }
};
// @lc code=end

