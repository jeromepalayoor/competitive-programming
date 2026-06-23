# from functools import lru_cache

# class Solution(object):
#     def zigZagArrays(self, n, l, r):
#         """
#         :type n: int
#         :type l: int
#         :type r: int
#         :rtype: int
#         """
#         m = r - l + 1

#         @lru_cache(maxsize=None)
#         def count(pos, last_val, last_dir):
#             if pos == n:
#                 return 1
#             if last_dir == 'up':
#                 ran = range(1, last_val)
#             else:
#                 ran = range(last_val+1, m+1)
#             s = 0
#             for c in ran:
#                 s = (s + count(pos+1, c, 'up' if last_dir == 'down' else 'down')) % (10**9 + 7)
#             return s
        
#         total = 0
#         for b in range(1, m+1):
#             total = (total + (b-1) * count(2, b, 'up')) % (10**9 + 7)
#             total = (total + (m-b) * count(2, b, 'down')) % (10**9 + 7)
#         return total


class Solution:
    def zigZagArrays(self, n: int, l: int, r: int) -> int:
        MOD = 10**9 + 7
        m = r - l + 1
        up = [1] * (m + 1)
        down = [1] * (m + 1)
        
        for _ in range(2, n + 1):
            new_up = [0] * (m + 1)
            new_down = [0] * (m + 1)
            s_down, s_up = 0, sum(up[1:]) % MOD
            for v in range(1, m + 1):
                new_up[v] = s_down
                s_up = (s_up - up[v]) % MOD
                new_down[v] = s_up
                s_down = (s_down + down[v]) % MOD
            up, down = new_up, new_down
        
        return (sum(up[1:]) + sum(down[1:])) % MOD


s = Solution()
print(s.zigZagArrays(3, 4, 5))
print(s.zigZagArrays(3, 1, 3))
print(s.zigZagArrays(33, 328, 969))
print(s.zigZagArrays(930, 528, 1931))
print(s.zigZagArrays(2000, 1, 2000))