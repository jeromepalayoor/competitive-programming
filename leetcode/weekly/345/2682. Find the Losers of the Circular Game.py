# https://leetcode.com/contest/weekly-contest-345/problems/find-the-losers-of-the-circular-game/

class Solution(object):
    def circularGameLosers(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: List[int]
        """
        
        received = [0] * n
        currentFriend = 0
        received[0] = 1
        for i in range(1,50):
            currentFriend = (currentFriend + k*i) % n
            received[currentFriend] += 1

            if received[currentFriend] > 1:
                break


        losers = []
        for i in range(n):
            if received[i] == 0:
                losers.append(i+1)
        
        return losers