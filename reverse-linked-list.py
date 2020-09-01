#adding LeetCode module for the task

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
        if not head:
            return head

        nxt = None
        while(head.next != None):
            prev = head.next
            head.next = nxt
            nxt = head
            head = prev
        head.next = nxt
        return head
            
