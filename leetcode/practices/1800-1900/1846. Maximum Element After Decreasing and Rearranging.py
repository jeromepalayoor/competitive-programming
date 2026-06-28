class Solution(object):
    def maximumElementAfterDecrementingAndRearranging(self, arr):
        """
        :type arr: List[int]
        :rtype: int
        """
        arr.sort()
        curr = 1
        for i in range(1, len(arr)):
            nxt = arr[i]
            if nxt-curr > 1:
                curr = curr + 1
            else:
                curr = nxt
        return curr