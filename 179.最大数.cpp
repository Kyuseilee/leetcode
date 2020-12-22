/*
 * @lc app=leetcode.cn id=179 lang=cpp
 *
 * [179] 最大数
 */

// @lc code=start
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string s = "";
        int n = nums.size();
        int hassmaller = 1;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(j+1 == n)
                    break;
                string tmp = to_string(nums[j]);
                string tmpj = to_string(nums[j+1]);
                if(tmp[0] < tmpj[0])
                    swap(nums[j+1], nums[j]);
                else if(tmp[0] == tmpj[0]){
                    int left = 0;
                    int right = 0;
                    while(left < tmp.size() and tmp[left] == tmpj[right])
                        left++;
                    while(right < tmpj.size() and tmpj[right] == tmpj[left])
                        right++;
                    if(tmp[left] < tmp[right])
                    swap(nums[j+1], nums[j]);
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            s += to_string(nums[i]);
        }
        return s;


    }
};
// @lc code=end

