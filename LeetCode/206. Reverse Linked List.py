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
        
        if head is None:
            return None

        length = 0

        pointer = head
        while pointer != None:
            length = length + 1
            pointer = pointer.next
        
        out = ListNode()
        pointer = head
        for i in range(length):
            if i == 0:
                out.val = pointer.val
                pointer = pointer.next
            else:
                out = ListNode(pointer.val, out)
                pointer = pointer.next
        
        return out
