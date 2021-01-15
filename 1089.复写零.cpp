/*
 * @lc app=leetcode.cn id=1089 lang=cpp
 *
 * [1089] 复写零
 */

// @lc code=start
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int>tmp;
        int pos = 0;
        while(tmp.size() < arr.size()){
            if(arr[pos] != 0){
                tmp.push_back(arr[pos]);
            }
            else{
                tmp.push_back(0);
                if(tmp.size() == arr.size())
                    break;
                tmp.push_back(0);
            }
            pos++;
        }
        arr = tmp;
        return ;
    }
};
// @lc code=end

