# module taken from leet code problem; learned about call by object reference and static variable in python

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    
    
    
    def maxPathSum(self, root):
        def find_max(root):
            if not root:
                return 0
            l = find_max(root.left)
            r = find_max(root.right)
            child_sum = max(max(l,r)+root.val , root.val)
            sub_sum = max(child_sum , l+r+root.val)
            
            find_max.cur_sum = max(find_max.cur_sum , sub_sum)
            return child_sum
        """
        :type root: TreeNode
        :rtype: int
        """
        #static variable
        find_max.cur_sum = float("-inf")
        find_max(root)
        return find_max.cur_sum
