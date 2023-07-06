# https://leetcode.com/contest/weekly-contest-345/problems/maximum-number-of-moves-in-a-grid/

class Solution(object):
    def maxMoves(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """

        rows = len(grid)
        cols = len(grid[0])

        dp ={}

        def dfs(r,c,prev):

            if (r,c) in dp:
                return dp[(r,c)]

            if c == cols or c == -1: 
                return 0
            if r == rows or r == -1:
                return 0
            if grid[r][c]<=prev:
                return 0

            curr = grid[r][c]

            ne = dfs(r-1,c+1,curr)
            e = dfs(r,c+1,curr)
            se = dfs(r+1,c+1,curr)

            ans =1+ max(ne,e,se)
            dp[(r,c)] = ans
            return ans

        ans = 0
        for r in range(rows):
            ans = max(ans,dfs(r,0,-1))


        return ans - 1