# https://leetcode.com/problems/maximum-ice-cream-bars/

class Solution(object):
    def maxIceCream(self, costs, coins):
        """
        :type costs: List[int]
        :type coins: int
        :rtype: int
        """

        costs.sort()
        bars = 0
        i = 0
        while coins > 0 and i < len(costs):
            coins -= costs[i]
            if coins < 0:
                break
            i += 1
            bars += 1
        return bars

s = Solution()
print(s.maxIceCream([1,3,2,4,1], 7))
print(s.maxIceCream([10,6,8,7,7,8], 5))
print(s.maxIceCream([1,6,3,1,2,5], 20))