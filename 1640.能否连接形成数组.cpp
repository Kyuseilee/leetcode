/*
 * @lc app=leetcode.cn id=1640 lang=cpp
 *
 * [1640] 能否连接形成数组
 */

// @lc code=start
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int arrpos = 0;
        while(arrpos < arr.size()){
            int pos = 0;
            while(pos < pieces.size() and pieces[pos][0]!= arr[arrpos])
            {
                pos++;
            }
            if(pos >= pieces.size())
                return false;
            for(int j = 0; j < pieces[pos].size(); j++){
                if(pieces[pos][j] != arr[arrpos])
                {
                    return false;
                }
                arrpos++;
            }
        }
        return true;
    }
};
// @lc code=end

