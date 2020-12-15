/*
 * @lc app=leetcode.cn id=717 lang=cpp
 *
 * [717] 1比特与2比特字符
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int pointer = 0;
        while(pointer <bits.size()){
            if(bits[pointer] == 1)
                if(pointer+2 >= bits.size())
                    return false;
                else{
                    pointer += 2;
                }
            else
                pointer++;
        }
        return true;

    }
};
// @lc code=end

