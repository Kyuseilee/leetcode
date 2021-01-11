/*
 * @lc app=leetcode.cn id=1122 lang=cpp
 *
 * [1122] 数组的相对排序
 */

// @lc code=start
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> notused;
        for(auto num : arr1){
            notused[num] += 1;
        }
        vector<int> res;
        for(auto num : arr2){
            while(notused[num]){
                res.push_back(num);
                notused[num]--;
            }
        }
        vector<int>tmp;
        for(auto item : notused){
            while(item.second){
                tmp.push_back(item.first);
                item.second--;
            }
        }
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i < tmp.size(); i++){
            res.push_back(tmp[i]);
        }
        return res;
    }
};
// @lc code=end

