# https://leetcode.com/contest/biweekly-contest-101/problems/form-smallest-number-from-two-digit-arrays/

class Solution(object):
    def minNumber(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """

        nums1.sort()
        nums2.sort()

        a = 10000
        for i in range(9,-1,-1):
            if i in nums1 and i in nums2:
                a = i
        
        b = nums1[0] + nums2[0] * 10

        c = nums2[0] + nums1[0] * 10

        return min(a,b,c)