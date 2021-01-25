#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;


int partion(vector<int>&a, int left, int right)
{
    int i = left, j = right, x = a[left];
    while(i < j)
    {
        while(i < j and a[j] >= x)
        {
            j--;
        }
        if(i<j)
        {
            a[i++] = a[j];
        }
        while(i < j and a[i] <= x)
        {
            i++;
        }
        if(i < j)
            a[j--] = a[i];
    }
    a[i] = x;
    return i;
}
void QucikSort(vector<int>&vec, int left, int right)
{
    if(left < right)
    {
        int q = partion(vec, left, right);
        QucikSort(vec, left, q-1);
        QucikSort(vec, q+1, right);
    }
}

int main()
{
    vector<int>nums;
    nums.clear();
    cout << "Enter ur Number:\n";
    int a;
    char c;

    while(cin >> a)
    {
        nums.push_back(a);
    }
    QucikSort(nums, 0, nums.size()-1);
    for(auto ch : nums)
    {
        cout << ch << " ";
    }
    return 0;
}



