/*
 * @lc app=leetcode.cn id=599 lang=cpp
 *
 * [599] 两个列表的最小索引总和
 */

// @lc code=start
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> map1;
        unordered_map<string, int> map2;
        int min_state = INT_MAX;
        for(int i = 0; i < list1.size(); i++){
            map1[list1[i]] = i;
        }
        for(int i = 0; i < list2.size(); i++){
            if(map1.count(list2[i])){
                map2[list2[i]] = map1[list2[i]] + i;
            }
        }
        vector<string> res;
        for(auto item : map2)
        {
            if(min_state > item.second){
                min_state = item.second;
                res.clear();
                res.push_back(item.first);
            }
            else if(min_state == item.second)
                res.push_back(item.first);
        }
        return res;
    }
};
// @lc code=end

