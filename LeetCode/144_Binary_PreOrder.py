# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: TreeNode) -> List[int]:
        # Preorder traversal : VLR
        result = []
        def pre(root):
            if not root : return 
            result.append(root.val)
            pre(root.left)
            pre(root.right)
        pre(root)
        return result