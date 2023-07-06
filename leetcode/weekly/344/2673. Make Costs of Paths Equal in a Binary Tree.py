# https://leetcode.com/contest/weekly-contest-344/problems/make-costs-of-paths-equal-in-a-binary-tree/

class Solution(object):
    def minIncrements(self, n, cost):
        """
        :type n: int
        :type cost: List[int]
        :rtype: int
        """
        
        output = 0
        
        for i in range(n // 2 - 1, -1, -1):
            left = 2 * i + 1
            right = 2 * i + 2
            output += abs(cost[left] - cost[right])
            cost[i] += max(cost[left], cost[right])

        return output