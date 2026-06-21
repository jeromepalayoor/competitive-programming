class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack = []
        for i in s:
            if i in ['(', '[', '{']:
                stack.append(i)
            else:
                if len(stack) == 0: return False
                j = stack.pop()
                if j == '(' and i == ')':
                    continue
                if j == '[' and i == ']':
                    continue
                if j == '{' and i == '}':
                    continue
                return False
        return False if len(stack) > 0 else True
    
s = Solution()
print(s.isValid('()'))
print(s.isValid('()[]{}'))
print(s.isValid('(]'))
print(s.isValid('([])'))
print(s.isValid('([)]'))