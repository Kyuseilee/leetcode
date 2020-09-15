#
# @lc app=leetcode.cn id=20 lang=python
#
# [20] 有效的括号
#

# @lc code=start
class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        if not s:
            return True
        if s[0] in ')}]':
            return False
        for ch in s:
            if ch == '('or ch == '{' or ch == '[':
                stack.append(ch)
            else:
                if not stack:
                    return False
                if ch == ')':
                    tmp = stack.pop()
                    if tmp == '(':continue
                    return False
                if ch == ']':
                    tmp = stack.pop()
                    if tmp == '[': continue
                    return False
                if ch == '}':
                    tmp = stack.pop()
                    if tmp == '{': continue
                    return False
        return True if not stack else False

# @lc code=end

