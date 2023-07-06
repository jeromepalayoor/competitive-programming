# https://leetcode.com/contest/weekly-contest-345/problems/neighboring-bitwise-xor/

class Solution(object):
    def doesValidArrayExist(self, derived):
        """
        :type derived: List[int]
        :rtype: bool
        """

        return sum(derived)%2 == 0