#include<iostream>
#include<math.h>

using namespace std;
long long sum = 1;
bool flag = false;
void helper(int start, int end, int max_val)
{
    for(int i = start; i < pow(2, max_val); i++)
    {
        sum += i*max_val;
        if(i == end)
        {
            flag = true;
            break;
        }
    }
    if(flag)
        return ;
    max_val++;
    start = pow(2,max_val);
    helper(start, end, max_val);  
    return ;      
}
int main(){
    int n;
    cin >> n;
    helper(2, n, 2);
    cout << sum % 998244353;
    return 0;

}