class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        j = 0
        e = 0
        f = 0
        for i in range(len(nums)-1):
            f = max(f, i+nums[i])
            if i == e:
                j += 1
                e = f
        return j
    
s = Solution()
print(s.jump([2,3,1,1,4]))
print()
print(s.jump([2,3,0,1,4]))