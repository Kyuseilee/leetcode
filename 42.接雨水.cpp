/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {

        int left = 0;
        while(left < height.size() and height[left] == 0)
            left++;

        int square = 0;
        int right = left+1;
        int max_val = INT_MIN;
        int index;

        for(int i = left; i < height.size(); i++)
        {
            if(height[i] >= max_val)
            {
                max_val = height[i];
                index = i;
            }
        }

        bool flag = false;

        if(index == left or index == right)
            flag = true;

        if(!flag)
        {
            while(right < height.size())
            {
                while(right < index and height[right] < height[left])
                    right++;
                if(right == index){
                    flag = true;
                }
                if(right == left+1)
                {
                    left = right;
                    right = left+1;
                    continue;
                }
                square += (right-left)*height[left];
                // cout << left << " " << right << " ";
                while(left < right)
                {
                    square -= height[left];
                    left++;
                }
                left = right;
                right = left+1;
                if(flag)
                {
                    cout << "flag is true\n";
                    if(right >= height.size()-1)
                        return square;
                    break;
                }
            }
        }
        if(flag)
        {
            left = height.size()-1;
            right = left-1;
            while(right >= index) 
            {
                while(right > index and height[right] < height[left])
                    right--;
                if(right == left-1)
                {
                    left = right;
                    right = left-1;
                    continue;
                }
                if(right == index){
                    flag = false;
                }
                cout << left << " " << right << " ";
                square += (left-right)*height[left];
                while(left > right)
                {
                    // cout << square << "\n";
                    square -= height[left];
                    left--;
                }
                cout << square << "\n";
                left = right;
                right = left-1;
                if(!flag)
                    break;
            }
        }
        return square;
    }
};
// @lc code=end

