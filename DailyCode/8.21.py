class Solution:
    def minDepth(self, root):
        if not root:
            return 0
        
        que = collections.deque([(root, 1)])
        while que:
            node, depth = que.popleft()
            if not node.left and not node.right:
                return depth
            if node.left:
                que.append((node.left, depth+1))
            if node.right:
                que.append((node.right, depth + 1))
        return 0