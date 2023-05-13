# https://leetcode.com/contest/biweekly-contest-102/problems/find-the-width-of-columns-of-a-grid/

class Solution(object):
    def findColumnWidth(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: List[int]
        """
        
        m = len(grid)
        n = len(grid[0])
        
        res = [0] * n

        for i in range(m):
            for j in range(n):
                res[j] = max(res[j], len(str(grid[i][j])))

        return res
    
# thinkings process:
# loop through each row and column, and find the max length of the string of that cell of each column
# inefficent tho