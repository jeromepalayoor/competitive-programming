class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        left = 0
        window_sum = 0
        best = float('inf')

        for right in range(len(nums)):
            window_sum += nums[right]
            while window_sum >= target:
                best = min(right-left+1, best)
                # print(best, left, right, nums[left:right+1])
                window_sum -= nums[left]
                left += 1

        return 0 if best == float('inf') else best
    
s = Solution()
print(s.minSubArrayLen(7, [2,3,1,2,4,3]))
print(s.minSubArrayLen(4, [1,4,4]))
print(s.minSubArrayLen(11, [1,1,1,1,1,1,1,1]))