class Solution(object):
    def minTaps(self, n, ranges):
        """
        :type n: int
        :type ranges: List[int]
        :rtype: int
        """
        points = [0]*(n+1)

        for i in range(n+1):
            left = max(0, i-ranges[i])
            right = min(n, i+ranges[i])
            points[left] = max(right, points[left])
        
        print(points)

        j = 0
        e = 0
        f = 0
        for i in range(n):
            # print(j, e, f)
            f = max(f, points[i])
            if i == e:
                j += 1
                if e == f: return -1
                e = f
        return j

s = Solution()
print(s.minTaps(5, [3,4,1,1,0,0]))
print()
print(s.minTaps(3, [0,0,0,0]))
print()
print(s.minTaps(7, [1,2,1,0,2,1,0,1]))
