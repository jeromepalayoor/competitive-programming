# https://leetcode.com/contest/biweekly-contest-102/problems/design-graph-with-shortest-path-calculator/

import heapq

class Graph(object):

    def __init__(self, n, edges):
        """
        :type n: int
        :type edges: List[List[int]]
        """

        self.big_list = [[] for i in range(n)]
        for a,b,c in edges:
            self.big_list[a].append((b,c))        

    def addEdge(self, edge):
        """
        :type edge: List[int]
        :rtype: None
        """

        a,b,c = edge
        self.big_list[a].append((b,c))        
        

    def shortestPath(self, node1, node2):
        """
        :type node1: int
        :type node2: int
        :rtype: int
        """
        
        n = len(self.big_list)

        # Dijkstra's algorithm

        pq = [(0, node1)]
        dist = [float('inf')] * n
        dist[node1] = 0

        while pq:
            d,u = heapq.heappop(pq)
            if u == node2:
                return d
            for v,w in self.big_list[u]:
                if dist[v] > d+w:
                    dist[v] = d+w
                    heapq.heappush(pq, (dist[v], v))

        return -1
    
# thinking process:
# implement dijkstra's algorithm