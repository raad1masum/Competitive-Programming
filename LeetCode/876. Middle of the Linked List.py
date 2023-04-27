# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """

        length = 1
        current = head

        while current.next != None:
            length += 1
            current = current.next

        pointer = head
        for i in range(length):
            if i == length/2:
                return pointer
            pointer = pointer.next
