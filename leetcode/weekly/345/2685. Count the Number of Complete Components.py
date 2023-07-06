# https://leetcode.com/contest/weekly-contest-345/problems/count-the-number-of-complete-components/

class Solution(object):
    def countCompleteComponents(self, n, edges):
        """
        :type n: int
        :type edges: List[List[int]]
        :rtype: int
        """
        
        graph = {i: set() for i in range(n)}
        for u, v in edges:
            graph[u].add(v)
            graph[v].add(u)
        
        def dfs(src):
            visited = set()
            s = [src]
            while s:
                node = s.pop()
                if node not in visited:
                    visited.add(node)
                    for nb in graph[node]:
                        if nb not in visited:
                            s.append(nb)
            return visited
        
        visited = set()
        
        clusters = []
        for i in range(n):
            if i not in visited:
                c = dfs(i)
                clusters.append(c)
                visited |= c
        
        def complete(c):
            for i in c:
                for j in c:
                    if j == i:
                        continue
                    if j not in graph[i]:
                        return 0
            return 1
        
        return sum(complete(c) for c in clusters)