# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def detectCycle(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        fast = head
        slow = head

        if slow is None or slow.next is None:
            return None

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
            
            if slow == fast:
                break

        if slow == fast:
            slow = head
            while slow != fast:
                slow = slow.next
                fast = fast.next

            count = 0
            pointer = head
            while slow != pointer:
                pointer = pointer.next
                count += 1
            return pointer
