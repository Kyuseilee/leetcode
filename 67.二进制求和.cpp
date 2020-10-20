/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        int size_a = a.size();
        int size_b = b.size();
        while(size_a < size_b){
            a = '0' + a;
            ++size_a;
        }
        while(size_a > size_b){
            b = '0' + b;
            ++size_b;
        }

        for(int j = a.size() - 1; j > 0; j--){
            a[j] = a[j] - '0' + b[j];
            if(a[j] >= '2'){
                a[j] = (a[j] - '0') % 2 + '0';
                a[j-1] = a[j-1] + 1;
            }
        }
        a[0] = a[0] + b[0] - '0';
        if(a[0] >= '2')
        {
            a[0] = (a[0] - '0') % 2 + '0';
            a = '1' + a;
        }
        return a;
    }
};
// @lc code=end

