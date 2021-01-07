/*
 * @lc app=leetcode.cn id=697 lang=cpp
 *
 * [697] 数组的度
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        if(nums.size() < 1)
            return 0;
        unordered_map<int, int> com;
        unordered_map<int, vector<int>>tmp;
        for(int i = 0; i < nums.size(); i++)
        {
            com[nums[i]] += 1;
            if(tmp[nums[i]].empty())
                tmp[nums[i]].push_back(i);
            else{
                 if(tmp[nums[i]].size() > 1)
                    tmp[nums[i]].pop_back();
                tmp[nums[i]].push_back(i);
            }
        }
        int count = 0, min_length = INT_MAX;
        vector<int> vals;
        for(auto item : com){
            if(item.second > count){
                count = item.second;
                vals.clear();
                vals.push_back(item.first);
            }
            else if(item.second == count){
                vals.push_back(item.first);
            }
        }
        if(count == 1)
            return 1;
        for(auto val : vals){
            min_length = min(min_length, tmp[val][1] - tmp[val][0]+1);
        }
        return min_length;

    }
};
// @lc code=end

