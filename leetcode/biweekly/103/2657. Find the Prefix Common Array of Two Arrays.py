# https://leetcode.com/contest/biweekly-contest-103/problems/find-the-prefix-common-array-of-two-arrays/

class Solution(object):
    def findThePrefixCommonArray(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        
        output = []
        n = len(A)
        unpairedA = []
        unpairedB = []
        for i in range(n):
            if i == 0:
                if A[i] == B[i]:
                    output.append(1)
                    continue
                else:
                    unpairedA.append(A[i])
                    unpairedB.append(B[i])
                    output.append(0)
                    continue

            elif i == n-1:
                output.append(n)
                continue

            unpairedA.append(A[i])
            unpairedB.append(B[i])

            if len(unpairedA) == 1:
                if unpairedA[0] == unpairedB[0]:
                    output.append(output[-1]+1)
                    unpairedA = []
                    unpairedB = []
                    continue
                else:
                    output.append(output[-1])
                    continue
            
            else:
                c = 0
                tmp = []
                for j in range(len(unpairedA)):
                    if unpairedA[j] in unpairedB:
                        c += 1
                        unpairedB.remove(unpairedA[j])
                        tmp.append(unpairedA[j])

                for k in tmp:
                    unpairedA.remove(k)

                output.append(output[-1]+c)

        return output
    

# thinking process:
# im surprised that this solution passed all test cases at the first try
# i think this is a very naive solution, but it works
# i think the time complexity is O(n^2) but since n<=50 its not that bad