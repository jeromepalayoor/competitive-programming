# https://leetcode.com/contest/biweekly-contest-103/problems/maximum-sum-with-exactly-k-elements/

class Solution(object):
    def maximizeSum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        
        return max(nums)*k + k*(k-1)//2
    

# thinking process:
# once we choose the max number from the list
# it will be the max number again after adding 1 to it and appending it to the list
# so the max value will be added k times
# with k(k-1) / 2 = 1+2+3+...+(k-1) times of adding 1 to the max value
# return