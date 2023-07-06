# https://leetcode.com/contest/weekly-contest-344/problems/find-the-distinct-difference-array/

class Solution(object):
    def distinctDifferenceArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        output = []
        for i in range(n):
            tmp = []
            for j in range(i+1):
                if nums[j] not in tmp:
                    tmp.append(nums[j])
            tmp2 = []
            for j in range(i+1, n):
                if nums[j] not in tmp2:
                    tmp2.append(nums[j])

            print(tmp, tmp2)

            output.append(len(tmp) - len(tmp2))

        return output