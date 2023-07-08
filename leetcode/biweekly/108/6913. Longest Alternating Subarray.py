class Solution(object):
    def alternatingSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_count = -1

        for i in range(len(nums) - 1):
            curr = 1
            for j in range(i + 1, len(nums)):
                if nums[j] == nums[j-1] + curr:
                    curr *= -1
                    temp = j - i + 1
                    if temp > max_count:
                        max_count = temp
                else:
                    break
        
        return max_count