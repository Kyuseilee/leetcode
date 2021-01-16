/*
 * @lc app=leetcode.cn id=1588 lang=cpp
 *
 * [1588] 所有奇数长度子数组的和
 */

// @lc code=start
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;
        for(int i = 1; i <= arr.size(); i++){
            if(i % 2 == 1)
            {
                for(int j = 0; j <= arr.size() -i; j++)
                {
                    int pos = j;
                    int count = 0;
                    int tmp = 0;
                    while(count < i)
                    {
                        tmp += arr[pos];
                        count++;
                        pos++;
                    }
                    sum += tmp;
                }
            }
        }
        return sum;
    }
};
// @lc code=end

