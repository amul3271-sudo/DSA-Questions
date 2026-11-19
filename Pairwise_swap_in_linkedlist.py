''' Structure of linked list Node
class Node:
    def __init__(self, x):
        self.data = x
        self.next = None
'''
class Solution:
    def pairwiseSwap(self, head):
        # code here
        curr=head
        while curr is not None and curr.next is not None:
            curr.data,curr.next.data=curr.next.data,curr.data
            curr=curr.next.next
        return head
