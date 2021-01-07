/*
 * @lc app=leetcode.cn id=565 lang=cpp
 *
 * [565] 数组嵌套
 */

// @lc code=start
class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int count = 1;
        int max_count = 0;
        vector<bool>visited(nums.size(), false);

        for(int i = 0; i < nums.size(); i++){
            if(visited[i])
                continue;
            int index = nums[i];

            while(i != index)
            {

                count++;
                visited[index] = true;
                index = nums[index];
            }

            max_count = max(count, max_count);
            count = 1;
            visited[i] = true;
        }
        max_count = max(count, max_count);
        return max_count;
    }
};
// @lc code=end

