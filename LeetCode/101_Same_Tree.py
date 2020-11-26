class Solution:
    def isSameTree(self, p: TreeNode, q: TreeNode) -> bool:
        if not p and not q: return True
        if not p or not q: return False
        l = self.isSameTree(p.left, q.left)
        r = self.isSameTree(p.right, q.right)
        return l and r and p.val == q.val
