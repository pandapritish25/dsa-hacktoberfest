# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        queue = deque([root])
        levels = []
        odd = False
        while queue:
            n = len(queue)
            level = []
            for i in range(n):
                node = queue.popleft()
                level.append(node)
                if node.left:
                    queue.append(node.left)
                if node.right:
                    queue.append(node.right)
            if odd:
                levels.append(level)
                odd = False
            else:
                odd = True
        for level in levels:
            i = 0
            j = len(level) - 1
            while i <= j:
                level[i].val, level[j].val = level[j].val, level[i].val
                i += 1
                j -= 1
        return root
