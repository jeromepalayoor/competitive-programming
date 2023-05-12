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

# thinking process:
# loop through each number in list
# for each number, loop through all numbers before it
# if the number is not in the list, add it
# do the same for all numbers after it
# then subtract the length of the list of numbers after it from the list of numbers before it
# this will give the distinct difference array for each number