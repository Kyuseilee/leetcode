class Solution:
    def maxCoins(self, piles: List[int]) -> int:
        piles.sort()
        res = []
        n = len(piles)
        while len(piles):
            res.append(piles[-2])
            del res[0]
            del res[-1]
            del res[-2]
        return sum(res)
    def findLatestStep(self, arr: List[int], m: int) -> int:
        if m == len(arr):
            return m
        s = "1" * len(arr)
        arr_r = reversed(arr)
        for loc in arr_r:
            s = s.replace(s[loc], "0")
            tmp = s.split("0")
    def mostVisited(self, n: int, rounds: List[int]) -> List[int]:
        v = [0] * len(rounds)
        dic = { i:v[rounds.index(i)] for i in rounds }  
        for i in range(len(rounds) - 1):
            if rounds[i] < rounds[i+1]:
                for j in range(rounds[i], rounds[i+1] + 1):
                    dic[j] += 1

            


            
