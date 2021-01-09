/*
 * @lc app=leetcode.cn id=859 lang=cpp
 *
 * [859] 亲密字符串
 */

// @lc code=start
class Solution {
public:
    bool buddyStrings(string A, string B) {
        if(A.size() != B.size() or A.empty())
            return false;
        bool flag = false;
        int pos = 0;
        unordered_map<char, int>com;
        if(A == B){
            for(auto ch : A)
                com[ch] += 1;
            for(auto item : com)
                if(item.second > 1)
                    return true;
            return false;
        }
        for(int i = 0; i < A.size(); i++){
            if(A[i] != B[i]){
                if(flag)
                {
                    swap(A[i], A[pos]);
                    return A == B;
                }
                flag = true;
                pos = i;
            }
        }
        return false;
    }
};
// @lc code=end

