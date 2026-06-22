class Solution(object):
    def maxNumberOfBalloons(self, text):
        """
        :type text: str
        :rtype: int
        """
        m = {'b': 0, 'a': 0, 'l': 0, 'o': 0, 'n': 0}
        for i in text: 
            if i in m:
                m[i] += 1
        m['l'] //= 2
        m['o'] //= 2
        return min(m.values())
    
s = Solution()
print(s.maxNumberOfBalloons("nlaebolko"))
print(s.maxNumberOfBalloons("loonbalxballpoon"))
print(s.maxNumberOfBalloons("leetcode"))