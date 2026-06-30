class Solution(object):
    def numberOfSubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = {'a': 0, 'b': 0, 'c': 0}
        i = 0
        total = 0
        for j in range(len(s)):
            count[s[j]] += 1
            while all(count[ch] > 0 for ch in 'abc'):
                total += len(s) - j
                count[s[i]] -= 1
                i += 1
        return total

s = Solution()
print(s.numberOfSubstrings('abcabc'))
print(s.numberOfSubstrings('aaacb'))
print(s.numberOfSubstrings('abc'))