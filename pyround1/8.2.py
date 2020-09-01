class Solution:
    def countGoodTriplets(self, arr: List[int], a: int, b: int, c: int) -> int:
        res = []
        if len(arr) < 3:
            return False
        for i in range(len(arr)):
            for j in range(i+1, len(arr)):
                if abs(arr[i] - arr[j]) <= a:
                    for k in range(j+1, len(arr)):
                        if abs(arr[j] - arr[k]) <= b:
                            if abs(arr[i] - arr[k]) <= c:
                                res.append([arr[i], arr[j], arr[k]])
        return len(res)
    def getWinner(self, arr: List[int], k: int) -> int:
        score = 0
        while score < k:
            if arr[0] > arr[1]:
                score += 1
                tmp = arr[1]
                arr.pop(arr[1])
                arr.append(tmp)
            else:
                score = 0
                tmp = arr[0]
                arr.pop(arr[0])
                arr.append(tmp)
        return arr[0]
    def maxSum(self, nums1: List[int], nums2: List[int]) -> int:
        max_value = max(sum(nums1), sum(nums2))
        for ch in num1:
            if ch in nums2:
                break
            return max_value
    def minSwaps(self, grid: List[List[int]]) -> int:
        n = len(grid)
        def swap(a, b):
            tmp = a
            grid[a] = grid[b]
            grid[b] = tmp
        scan = 0
        while scan <n:
            if grid[scan][scan] != 1:
                swap(scan, scan+1)
            scan += 1
        


