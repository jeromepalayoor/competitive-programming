class Solution(object):
    def dailyTemperatures(self, temperatures):
        """
        :type temperatures: List[int]
        :rtype: List[int]
        """
        stack = []
        ans = [0 for _ in range(len(temperatures))]
        for i, t in enumerate(temperatures):
            if len(stack) == 0:
                stack.append(i)
                continue
            while temperatures[stack[-1]] < t:
                j = stack.pop()
                ans[j] = i-j
                if len(stack) == 0: break
            stack.append(i)
        return ans


s = Solution()
print(s.dailyTemperatures([73,74,75,71,69,72,76,73]))
print(s.dailyTemperatures([30,40,50,60]))
print(s.dailyTemperatures([30,60,90]))