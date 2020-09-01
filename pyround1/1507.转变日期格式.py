#
# @lc app=leetcode.cn id=1507 lang=python3
#
# [1507] 转变日期格式
#

# @lc code=start
class Solution:
    def reformatDate(self, date: str) -> str:
        day, mon, year = date.split()
        mon_lst = ["Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"]
        mon_map = {mon:idx for idx,mon in enumerate(mon_lst,1)}
        return "%s-%02d-%02d" % (year, mon_map[mon], int(day[:-2]))

# @lc code=end

