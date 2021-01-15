/*
 * @lc app=leetcode.cn id=1013 lang=cpp
 *
 * [1013] 将数组分成和相等的三个部分
 */

// @lc code=start
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for(auto num : arr){
            sum += num;
        }
        sum /= 3;
        int count = 0;
        int pos = 0;
        for(int i = 0; i < arr.size(); i++){
            count += arr[i];
            if(sum == count){
                pos = i+1;
                count = 0;
                break;
            }
        }
        for(int i = pos; i < arr.size(); i++){
            count += arr[i];
            if(sum == count){
                pos = i+1;
                count = 0;
                break;
            }
        }
        if(pos == arr.size())
            return false;
        for(int i = pos; i < arr.size(); i++){
            count += arr[i];
        }
        cout << count;
        return count == sum;

    }
};
// @lc code=end

