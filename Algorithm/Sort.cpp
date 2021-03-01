#include<stdio.h>
#include<iostream>
#include<vector>
#include<time.h>
#include<windows.h>
#include<algorithm>


using namespace std;

void printNums(vector<int>nums)
{
    for(auto num : nums)
    {
        cout << num  << " ";
    }
    cout << endl;
}

void intersectionSort(vector<int>nums)
{
    clock_t start, end;
    LARGE_INTEGER t1, t2, tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);

    // start = clock();
    int pos = 0;
    while(pos < nums.size())
    {
        int min_val = nums[pos];
        int i = pos;
        while(i > 0 and nums[i-1] > min_val)
        {
            nums[i] = nums[i-1];
            i--;
        }
        nums[i] = min_val;
        pos++;
    }

    // end = clock();
    QueryPerformanceCounter(&t2);
    double time = (double)(t2.QuadPart-t1.QuadPart)/(double)tc.QuadPart;
    cout << "IntersectionSort time used : " << time << "s\n";
    printNums(nums);
    cout << "\n";
    return ;
}

void bubbleSort(vector<int>nums)
{

    LARGE_INTEGER t1, t2, tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);
    clock_t start, end;
    for(int i = 0; i < nums.size(); i++)
    {
        for(int j = 1; j < nums.size()-i; j++)
        {
            if(nums[j] < nums[j-1])
                swap(nums[j], nums[j-1]);
        }
    }

    QueryPerformanceCounter(&t2);
    double time = (double)(t2.QuadPart-t1.QuadPart)/(double)tc.QuadPart;
    cout << "BubbleSort time used : " << time << "s\n";
    printNums(nums);
    cout << "\n";
    return ;
}

void shellSort(vector<int>nums)
{
    LARGE_INTEGER t1, t2, tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);
    clock_t start, end;

    for(int increment = nums.size()/2; increment > 0; increment /=2)
    {
        for(int i =  increment; i < nums.size(); i++)
        {
            int tmp = nums[i];
            int j ;
            for(j = i; j >= increment; j -= increment)
            {
                if(tmp < nums[j-increment])
                    nums[j] = nums[j-increment];
                else
                {
                    break;
                }
                
            }
            nums[j] = tmp;
        }
    }

    QueryPerformanceCounter(&t2);
    double time = (double)(t2.QuadPart-t1.QuadPart)/(double)tc.QuadPart;
    cout << "ShellSort time used : " << time << "s\n";
    printNums(nums);
    cout << "\n";
    return ;
}

void adjustHeap(vector<int>&nums, int start, int end)
{
    int temp = nums[start];
    int i = 2*start+1;
    while(i <= end)
    {
        if(i+1 <= end and nums[i+1] > nums[i])
            i++;
        if(nums[i] <= temp)
            break;
        nums[start] = nums[i];
        start = i;
        i = 2*start+1;
    }
    nums[start] = temp;
    return ;
}
void heapSort(vector<int>nums)
{
    LARGE_INTEGER t1, t2, tc;
    QueryPerformanceFrequency(&tc);
    QueryPerformanceCounter(&t1);
    clock_t start, end;

    int i;
    for(int i = nums.size()/2-1; i >= 0; i--)
    {
        adjustHeap(nums, i, nums.size()-1);
    }
    for(i = nums.size()-1; i > 0; i--)
    {
        swap(nums[i], nums[0]);
        adjustHeap(nums, 0, i-1);
    }

    QueryPerformanceCounter(&t2);
    double time = (double)(t2.QuadPart-t1.QuadPart)/(double)tc.QuadPart;
    cout << "HeapSort time used : " << time << "s\n";
    printNums(nums);
    cout << "\n";
    return ;
}
int main()
{
    vector<int>nums;
    int a;
    while(cin>>a)
    {
        nums.push_back(a);
    }
    intersectionSort(nums);
    bubbleSort(nums);
    shellSort(nums);
    heapSort(nums);
    return 0;
}