#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void equal_subset()
{
    vector<int>nums{1, 5, 11, 5};

    int sum = 0;
    for(auto num : nums)
        sum += num;
    if(sum %2 == 1)
    {
        cout << false;
        return ;
    }
    sum /= 2;
    vector<int> res(20001, 0);
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = sum; j >= nums[i]; j--)
        {
            res[j] = max(res[j], res[j-nums[i]]+nums[i]);
        }
    }
    if(res[sum] == sum)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
    return ;
}


int main()
{
    equal_subset();
    return 0;
}