# https://leetcode.com/contest/biweekly-contest-101/problems/find-the-substring-with-maximum-cost/

class Solution(object):
    def maximumCostSubstring(self, s, chars, vals):
        """
        :type s: str
        :type chars: str
        :type vals: List[int]
        :rtype: int
        """
        
        numbers = []
        c = {i: idx for idx, i in enumerate(chars)}
        
        for i in s:
            if i in c:
                numbers.append(vals[c[i]])
            else:
                numbers.append(ord(i) - ord('a') + 1)

        prev_res = 0
        total_res = 0

        for i in numbers:
            total_res += i
            prev_res = max(prev_res, total_res)

            if total_res < 0:
                total_res = 0

        return prev_res