/*
 * @lc app=leetcode.cn id=888 lang=cpp
 *
 * [888] 公平的糖果交换
 */

// @lc code=start
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int suma = 0, sumb = 0;
        for(auto num : A){
            suma += num;
        }
        for(auto num :B){
            sumb += num;
        }
        unordered_map<int, int> target;
        for(auto num : A){
            target[num + (sumb-suma)/2] = num;
        }
        for(auto num :B){
            if(target.find(num) != target.end()){
                return {target[num], num};
            }
        }
        return {};
    }
};
// @lc code=end

