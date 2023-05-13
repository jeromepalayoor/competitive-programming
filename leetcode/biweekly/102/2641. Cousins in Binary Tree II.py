# https://leetcode.com/contest/biweekly-contest-102/problems/cousins-in-binary-tree-ii/

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution(object):
    def replaceValueInTree(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: Optional[TreeNode]
        """
        
        if root == None:
            return None
        
        root.val = 0
        nodes = [root]
        while len(nodes) > 0:
            tmp = []
            tsum = 0
            for node in nodes:
                if node.left:
                    tsum += node.left.val
                if node.right:
                    tsum += node.right.val
            for node in nodes:
                tmp_sum = 0
                if node.left:
                    tmp_sum += node.left.val
                if node.right:
                    tmp_sum += node.right.val
                if node.left:
                    node.left.val = tsum - tmp_sum
                    tmp.append(node.left)
                if node.right:
                    node.right.val = tsum - tmp_sum
                    tmp.append(node.right)
            nodes = tmp

        return root
    

# thinking process:
# visualise it for better understanding (draw it out on paper if u no understanding)