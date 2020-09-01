#
# @lc app=leetcode.cn id=204 lang=python
#
# [204] 计数质数
#

# @lc code=start
class Solution(object):
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 2:
            return 0
        
        isPrime = [1] * n
        isPrime[0] = isPrime[1] = 0

        for i in range(2, int(n **0.5 + 1)):
            if isPrime[i] :
                isPrime[i * i: n: i] = [0] * ((n -1 - i * i) // i + 1)
        return sum(isPrime)
# @lc code=end

