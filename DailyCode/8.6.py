class Solution:
    def palindromePairs(self, words: List[str]) -> List[List[int]]:
        res = []
        for i in range(len(words)):
            for j in range(len(words)) and j != i:
                s = words[i] + words[j]
                if s == s.reverse():
                    res.append([i, j])
        return res