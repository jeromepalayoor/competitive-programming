from bisect import bisect_left, insort

class Solution(object):
    def countMajoritySubarrays(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        sorted_pref = [0]
        count = 0
        curr = 0
        for num in nums:
            curr += (1 if num == target else -1)
            count += bisect_left(sorted_pref, curr)
            insort(sorted_pref, curr)
        return count