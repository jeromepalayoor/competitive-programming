# https://leetcode.com/contest/biweekly-contest-103/problems/make-array-empty/

class Solution(object):
    def countOperationsToEmptyArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        
        n = len(nums)
        map = {nums[i]: i for i in range(n)}
        nums.sort()
        
        ans = 1

        for i in range(n - 2, -1, -1):
            ans += (map[nums[i]] > map[nums[i+1]]) * (n - i) + (map[nums[i]] <= map[nums[i+1]])
            
        return ans