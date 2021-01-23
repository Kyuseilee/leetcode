#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;
void bag_problem()
{
    vector<int> weight{1, 3, 4};
    vector<int> value{15, 20, 30};
    int baseWeight = 4;

    vector<vector<int>>dp(value.size(), vector<int>(baseWeight+1, 0));
    for(int i = baseWeight; i>= weight[0]; i--)
    {
        dp[0][i] = value[0];
    }
    
    for(int i = 1; i < weight.size(); i++)
    {
        for(int j = 0; j <= baseWeight; j++)
        {
            if(j < weight[i]) dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
        }
    }
    cout << dp[weight.size()-1][baseWeight];
    return ;
}


int main()
{
    bag_problem();
    return 0;
}
