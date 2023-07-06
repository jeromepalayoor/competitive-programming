# https://leetcode.com/contest/weekly-contest-344/problems/number-of-adjacent-elements-with-the-same-color/

class Solution(object):
    def colorTheArray(self, n, queries):
        """
        :type n: int
        :type queries: List[List[int]]
        :rtype: List[int]
        """
        
        nums = [0]*n
        out = []
        prev = 0
        length = len(queries)
        for i in range(length):
            idx,new = queries[i]
            print(idx,new)
            val = nums[idx]
            nums[idx] = new

            if n == 1:
                out.append(0)
                continue
            
            if idx == 0:
                after = nums[idx+1]
                if after == 0:
                    out.append(prev)
                    continue
                if val != new:
                    if after == val:
                        prev -= 1
                    elif after == new:
                        prev += 1
                
            elif idx == n-1:
                before = nums[idx-1]
                if before == 0:
                    out.append(prev)
                    continue
                if val != new:
                    if before == val:
                        prev -= 1
                    elif before == new:
                        prev += 1

            else:
                before = nums[idx-1]
                after = nums[idx+1]
                if val != new:
                    if before != 0:
                        if before == val:
                            prev -= 1
                        elif before == new:
                            prev += 1
                    if after != 0:
                        if after == val:
                            prev -= 1
                        elif after == new:
                            prev += 1

            out.append(prev)

        return out