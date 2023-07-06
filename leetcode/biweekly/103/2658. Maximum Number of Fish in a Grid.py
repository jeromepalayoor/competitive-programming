# https://leetcode.com/contest/biweekly-contest-103/problems/maximum-number-of-fish-in-a-grid/

class Solution(object):
    def findMaxFish(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        n = len(grid)
        m = len(grid[0])
        out = 0
        for i in range(n):
            for j in range(m):
                if grid[i][j] > 0:
                    out = max(out, self.dfs(i, j, grid,n,m))

        return out

    def dfs(self, x, y, grid,n,m):
        p = grid[x][y]
        grid[x][y] = 0
        dr = [0, 1, 0, -1, 0]
        for k in range(4):
            nx, ny = x + dr[k], y + dr[k + 1]
            if 0 <= nx < n and 0 <= ny < m and grid[nx][ny] > 0:
                p += self.dfs(nx, ny, grid,n,m)

        return p