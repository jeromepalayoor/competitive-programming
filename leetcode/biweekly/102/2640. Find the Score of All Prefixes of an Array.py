# https://leetcode.com/contest/biweekly-contest-102/problems/find-the-score-of-all-prefixes-of-an-array/

class Solution(object):
    def findPrefixScore(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        n = len(nums)
        res = [0] * n
        prevsum = 0
        prevmax = 0

        for i in range(n):
            prevmax = max(prevmax, nums[i])
            prevsum += prevmax + nums[i]
            res[i] = prevsum

        return res