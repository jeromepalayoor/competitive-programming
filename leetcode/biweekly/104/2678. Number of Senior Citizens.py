# https://leetcode.com/contest/biweekly-contest-104/problems/number-of-senior-citizens/

class Solution(object):
    def countSeniors(self, details):
        """
        :type details: List[str]
        :rtype: int
        """
        
        return sum([int(x[-4:-2])>60 for x in details])
    
# thinking process:
# common sense