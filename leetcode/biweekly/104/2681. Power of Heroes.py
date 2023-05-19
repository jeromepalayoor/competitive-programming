# https://leetcode.com/contest/biweekly-contest-104/problems/power-of-heroes/

class Solution(object):
    def sumOfPower(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        mod = 10**9 + 7

        nums.sort()
        res = 0
        s = 0

        for x in nums:
            res += ((x + s) * (x * x))
            res %= mod
            s = (s*2 + x) % mod
        
        return res