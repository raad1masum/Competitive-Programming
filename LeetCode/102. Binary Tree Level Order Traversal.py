# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def levelOrder(self, root):
        """
        :type root: TreeNode
        :rtype: List[List[int]]
        """
        out = []

        def traverse(node, level, level_static, arr):
            if node:
                if level == 1:
                    if len(arr) < level_static+1:
                        arr.append([node.val])
                    else:
                        arr[level_static].append(node.val)
                    return node.val
                traverse(node.left, level-1, level_static, arr)
                traverse(node.right, level-1, level_static, arr)

        def get_height(node):
            if node:
                lheight = get_height(node.left)
                rheight = get_height(node.right)

                if lheight > rheight:
                    return lheight+1
                else:
                    return rheight+1
            else:
                return 0

        for i in range(get_height(root)):
            traverse(root, i+1, i, out)

        return out
