/*
 * @lc app=leetcode.cn id=1566 lang=cpp
 *
 * [1566] 重复至少 K 次且长度为 M 的模式
 */

// @lc code=start
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        vector<int>com;
        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            if(com.size() < m){
                com.push_back(arr[i]);
            }
            else{
                count = 1;
                vector<int> tmp;
                for(int j = i+1; j < arr.size(); j++){
                    if(count >= k)
                        return true;
                    if(tmp.size() == com.size())
                    {
                        count++;
                        tmp.clear();
                    }
                    if(arr[j] == com[j-i-1])
                    {
                        tmp.push_back(arr[j]);
                    }
                    else{
                        break;
                    }
                }
                com.clear();
            }
        }
        return false;
    }
};
// @lc code=end

