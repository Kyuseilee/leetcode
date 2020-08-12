class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        count = [1]
        j = 0
        for i in range(1, len(s)):
            if s[i] == s[i-1]:
                count[j] += 1
            else:
                count.append(1)
                j += 1
        res = 0
        for k in range(1, len(count)):
            res += min(count[k], count[k-1])

        return res