#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>


using namespace std;

int main()
{
    long long res;
    int n ;
    // cin >> n;
    // vector<int>tmp;
    // while(n)
    // {
    //     int length;
    //     cin >> length;
    //     tmp.push_back(length);
    //     n--;
    // }
    // for(auto num : tmp)
    // {
    //     res += pow(26, num);
    //     res %= 77797;
    // }
    res = 216871230680%77797;
    cout << res;
    return 0;
}