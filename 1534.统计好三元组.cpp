/*
 * @lc app=leetcode.cn id=1534 lang=cpp
 *
 * [1534] 统计好三元组
 */

// @lc code=start
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count = 0;
        for(int i = 0; i < arr.size()-2; i++)
        {
            for(int j = i+1; j < arr.size()-1; j++)
            {
                if(abs(arr[i] - arr[j]) <= a)
                {
                    for(int k = j+1; k < arr.size(); k++)
                    {
                        if(abs(arr[k] - arr[i]) <= c and abs(arr[j] - arr[k]) <= b)
                            count++;
                    }
                }
            }
        }
        return count;
    }
};
// @lc code=end

