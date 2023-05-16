"""
# Definition for a Node.
class Node(object):
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution(object):
    def preorder(self, root):
        """
        :type root: Node
        :rtype: List[int]
        """

        out = []

        def traverse(node, out):
            if node:
                out.append(node.val)
                for child in node.children:
                    traverse(child, out)

        traverse(root, out)

        return out
