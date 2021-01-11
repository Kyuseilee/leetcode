/*
 * @lc app=leetcode.cn id=274 lang=cpp
 *
 * [274] H 指数
 */

// @lc code=start
class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty())
            return 0;
        sort(citations.begin(), citations.end());
        int res = 0;
        int size = citations.size();
        for(int i = 0; i < size; i++){
            int cnt = size - i;
            res = max(res, min(cnt, citations[i]));
        }
        return res;
        // int left = 0, right = 0, mid = citations[citations.size()/2];
        // for(int i = 0; i < mid; i++){
        //     left += citations[i];
        // }
        // for(int j = mid; j < citations.size(); j++)
        // {
        //     right += citations[j];
        // }
        // if(left > right){
        //     mid--;
        //     while(left > right){
        //         left -= citations[mid];
        //         right += citations[mid];
        //     }
        // }
        // else if(left < right){
        //     mid++;
        //     while(left < right){
        //         left += citations[mid];
        //         right -= citations[mid];
        //     }
        // }
        // return citations[mid];


    }
};
// @lc code=end

