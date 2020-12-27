/*
 * @lc app=leetcode.cn id=1588 lang=cpp
 *
 * [1588] 所有奇数长度子数组的和
 */

// @lc code=start
class Solution {
public:
    int sum;
    int tmp;
    int sumOddLengthSubarrays(vector<int>& arr) {
        sum = 0;
        tmp = 0;
        for(int i = 1; i <= arr.size(); i++){
            if(i%2 == 1)
                backtracking(arr, i, 0, 0);
        }
        return sum;
    }
    void backtracking(vector<int>&arr,int length,int cur_length, int pos){
        if(cur_length == length)
        {
            cout << tmp << "\n";
            sum += tmp;
            return;
        }
        for(int i = pos; i < arr.size(); i++){
            tmp += arr[i];
            backtracking(arr, length, cur_length+1, i+1);
            tmp -= arr[i];
        }
    }
};
// @lc code=end

