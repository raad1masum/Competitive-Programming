# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getDecimalValue(self, head: ListNode) -> int:
        if head == None:
            return 0
        helper = lambda head,num : num if head == None else helper(head.next,head.val + 2 * num)
        return helper(head,0)