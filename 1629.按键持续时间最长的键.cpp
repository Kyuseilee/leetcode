/*
 * @lc app=leetcode.cn id=1629 lang=cpp
 *
 * [1629] 按键持续时间最长的键
 */

// @lc code=start
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
         int Maxi=0;//最长持续键的下标
        int Max= releaseTimes[0];//最长持续时间
        for(int i=1;i<releaseTimes.size();++i)
        {
            if(releaseTimes[i]-releaseTimes[i-1]>Max||(releaseTimes[i]-releaseTimes[i-1]==Max&&keysPressed[i]>keysPressed[Maxi]))//两种情况需要更新max
            {
                Maxi=i;//更新最长键的下标
                Max=releaseTimes[i] - releaseTimes[i - 1];//更新最长键时间
            }
        }
        return keysPressed[Maxi];
    }
};
// @lc code=end

