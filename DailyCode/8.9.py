class Solution:
    def makeGood(self, s: str) -> str:
        res = ""
        for ch in s:
            if ord(ch) < 97:
                res += 0
            else:
                res += 1
        for i in len(res):
            if res[i] != res [i+1]:
                s.replace(s[i+1], '')
        return s
    def findKthBit(self, n: int, k: int) -> str:
        s0 = '0'
        genenrate(n)
        def generate(num):
            s = ''
            while (num > 2):
                tmp = generate(num - 1) 
                s += tmp + '1' + genenrate(num - 1).reverse()
            s2 = '011'
            s3 = s2 + 
            


