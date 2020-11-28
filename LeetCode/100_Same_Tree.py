# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q: return True
        if not p or not q: return False
        l = self.isSameTree(p.left, q.left)
        r = self.isSameTree(p.right, q.right)
        return l and r and p.val == q.val
        