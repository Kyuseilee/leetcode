#
# @lc app=leetcode.cn id=1346 lang=python3
#
# [1346] 检查整数及其两倍数是否存在
#

# @lc code=start
class Solution:
    def checkIfExist(self, arr: List[int]) -> bool:
        arr_result=[]
        flag=False
        for i in range(len(arr)):
            arr_result.append(arr[i]*2)
        for i in range(len(arr_result)):
            if arr_result[i] in arr and arr.index(arr_result[i])!=i:flag=True#下标与自身不同
        return flag
# @lc code=end

