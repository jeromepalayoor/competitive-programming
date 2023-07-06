# https://leetcode.com/contest/biweekly-contest-104/problems/sum-in-a-matrix/

import numpy as np

class Solution(object):
    def matrixSum(self, nums):
        """
        :type nums: List[List[int]]
        :rtype: int
        """
        
        sums = 0

        for i in nums:
            i.sort()

        a = np.array(nums).T

        for i in a:
            sums += max(i)

        return sums