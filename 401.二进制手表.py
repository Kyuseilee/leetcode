#
# @lc app=leetcode.cn id=401 lang=python
#
# [401] 二进制手表
#

# @lc code=start
class Solution(object):
    def readBinaryWatch(self, num):
        """
        :type num: int
        :rtype: List[str]
        """
        list1 = []
        def count1(n):
            res = 0
            while n!= 0:
                n = n&(n-1)
                res += 1
            return res
        for i in range(12):
            for j in range(60):
                if (count1(i) + count1(j)) == num:
                    if j < 10:
                        s = str(i) + ':0' + str(j)
                    else:
                        s = str(i) +':'+ str(j)
                    list1.append(s)
        return list1

        
# @lc code=end

