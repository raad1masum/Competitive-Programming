# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head == None:
            return None

        arr = []

        def iter(top):
            if top and top.next != None:
                iter(top.next)
            if top:
                arr.append(top.val)
        
        iter(head)

        out = ListNode(arr[-1])

        for i in range(2, len(arr) + 1):
            out = ListNode(arr[-i], out)
        
        return out
