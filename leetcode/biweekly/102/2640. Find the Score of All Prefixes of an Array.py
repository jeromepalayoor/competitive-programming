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
    
# thinking process:
# since the prev max will change depending on the curr value, just check for that, dont need to loop through the whole array again
# the prev sum will be the sum of the prev max and the curr value