# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def isValidBST(self, root):
        """
        :type root: TreeNode
        :rtype: bool
        """

        in_order = []

        def traverse(node):
            if node:
                traverse(node.left)
                in_order.append(node.val)
                traverse(node.right)
        
        traverse(root)

        for i in range(len(in_order)):
            if i != 0 and in_order[i] <= in_order[i-1]:
                return False
        
        return True
