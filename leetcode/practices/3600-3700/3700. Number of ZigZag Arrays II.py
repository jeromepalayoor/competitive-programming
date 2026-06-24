# class Solution(object):
#     def zigZagArrays(self, n, l, r):
#         """
#         :type n: int
#         :type l: int
#         :type r: int
#         :rtype: int
#         """

#         def mat_mul(A, B, mod):
#             size = len(A)
#             C = [[0] * size for _ in range(size)]
#             for i in range(size):
#                 for j in range(size):
#                     for k in range(size):
#                         C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % mod
#             return C
        
#         def mat_pow(M, p, mod):
#             size = len(M)
#             result = [[1 if i==j else 0 for j in range(size)] for i in range(size)]
#             while p > 0:
#                 if p % 2 == 1:
#                     result = mat_mul(result, M, mod)
#                 M = mat_mul(M, M, mod)
#                 p //= 2
#             return result
        
#         m = r - l + 1
#         size = 2 * m
#         M = [[0] * size for _ in range(size)]

#         for i in range(1, m+1):
#             for j in range(1, m+1):
#                 if j < i:
#                     M[i-1][m+j-1] = 1
#                 if j > i:
#                     M[m+i-1][j-1] = 1

#         result = mat_pow(M, n-1, 10**9+7)
#         return sum(result[i][j] for i in range(size) for j in range(size)) % (10**9+7)


import numpy as np
class Solution(object):
    def zigZagArrays(self, n, l, r):
        """
        :type n: int
        :type l: int
        :type r: int
        :rtype: int
        """

        def mat_mul(A, B, mod):
            return np.mod(A.astype(object) @ B.astype(object), mod)
        
        def mat_pow(M, p, mod):
            size = len(M)
            result = np.eye(size, dtype=object)
            while p > 0:
                if p % 2 == 1:
                    result = mat_mul(result, M, mod)
                M = mat_mul(M, M, mod)
                p //= 2
            return result
        
        m = r - l + 1
        size = 2 * m
        M = [[0] * size for _ in range(size)]

        for i in range(1, m+1):
            for j in range(1, m+1):
                if j < i:
                    M[i-1][m+j-1] = 1
                if j > i:
                    M[m+i-1][j-1] = 1

        M = np.array(M, dtype=object)
        result = mat_pow(M, n-1, 10**9+7)
        return sum(result[i][j] for i in range(size) for j in range(size)) % (10**9+7)
    
s = Solution()
print(s.zigZagArrays(3, 4, 5))
print(s.zigZagArrays(3, 1, 3))