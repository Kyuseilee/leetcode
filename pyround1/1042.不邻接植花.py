#
# @lc app=leetcode.cn id=1042 lang=python3
#
# [1042] 不邻接植花
#

# @lc code=start
class Solution:
    def gardenNoAdj(self, N: int, paths: List[List[int]]) -> List[int]:
        from collections import defaultdict
        color = [1] * N
        graph =  defaultdict(list)
        for path in paths:
            if path[0] > path[1]:
                graph[path[0] - 1].append(path[1] - 1)
            else:
                graph[path[1] - 1].append(path[0] - 1)
        graph = sorted(graph.items())

        for i, n in graph:
            flower = [1, 2, 3, 4]
            for node in n:
                if color[node] in flower:
                    flower.remove(color[node])
            color[i] = flower[0]
        return color

        
# @lc code=end

