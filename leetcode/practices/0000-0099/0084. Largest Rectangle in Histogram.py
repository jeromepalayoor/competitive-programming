class Solution(object):
    def largestRectangleArea(self, heights):
        """
        :type heights: List[int]
        :rtype: int
        """
        best = 0
        stack = []
        for i, v in enumerate(heights):
            if len(stack) == 0:
                stack.append(i)
                continue
            if v < heights[stack[-1]]:
                while len(stack) > 0 and v <= heights[stack[-1]]:
                    h = heights[stack.pop()]
                    if len(stack) == 0:
                        w = i
                    else:
                        w = i - stack[-1] - 1
                    best = max(best, w*h)
            stack.append(i)
        while len(stack) > 0:
            h = heights[stack.pop()]
            if len(stack) == 0:
                w = len(heights)
            else:
                w = len(heights) - stack[-1] - 1
            best = max(best, w*h)
        return best


s = Solution()
print(s.largestRectangleArea([2,1,5,6,2,3]))
print(s.largestRectangleArea([2,4]))