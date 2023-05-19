# https://leetcode.com/contest/biweekly-contest-104/problems/maximum-or/

class Solution(object):
    def maximumOr(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        
        n = len(nums)
        res = 0

        pre = [0] * n
        suf = [0] * n

        for i in range(n - 1):
            pre[i + 1] = pre[i] | nums[i]

        for i in range(n - 1, 0, -1):
            suf[i - 1] = suf[i] | nums[i]

        for i in range(n):
            res = max(res, pre[i] | nums[i] << k | suf[i])

        return res
    