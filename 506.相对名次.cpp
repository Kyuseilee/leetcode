/*
 * @lc app=leetcode.cn id=506 lang=cpp
 *
 * [506] 相对名次
 */

// @lc code=start
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> com = nums;
        sort(com.rbegin(), com.rend());

        unordered_map<int, int> tmp;
        for(int i = 0; i < nums.size(); i++){
            tmp[nums[i]] = i;
        }

        vector<string> res(nums.size(), "");
        int count = 1;
        for(auto num : com){
            if(count == 1){
                res[tmp[num]] = "Gold Medal";
            }
            else if(count == 2){
                res[tmp[num]] = "Silver Medal";
            }
            else if(count == 3){
                res[tmp[num]] = "Bronze Medal";
            }
            else{
                res[tmp[num]] = to_string(count);
            }
            count++;
        }
        return res;
    }
};
// @lc code=end

