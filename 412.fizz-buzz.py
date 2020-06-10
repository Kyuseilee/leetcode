#
# @lc app=leetcode.cn id=412 lang=python
#
# [412] Fizz Buzz
#

# @lc code=start
class Solution(object):
    def fizzBuzz(self, n):
        """
        :type n: int
        :rtype: List[str]
        """
        res = []
        for i in range(n):
            if (i+1)%3 == 0 and (i+1)%5 == 0:
                res.append("FizzBuzz")
            elif (i+1)%3 == 0:
                res.append("Fizz")
            elif (i+1)%5 == 0:
                res.append("Buzz")
            else:
                res.append(str(i+1))
        return res

                    
# @lc code=end

