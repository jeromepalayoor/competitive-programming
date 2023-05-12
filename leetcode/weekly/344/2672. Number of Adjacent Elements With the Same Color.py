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
    

# thinking process:
# loop through each query
# for each query, get the index and new color
# get the current color at that index
# if the current color is the same as the new color, then the number of adjacent elements with the same color is the same as the previous query
# if the current color is different from the new color, then the number of adjacent elements with the same color is the same as the previous query, plus or minus 1 depending on the adjacent elements
# if the index is 0, then only the element after it matters
# if the index is n-1 (last element), then only the element before it matters
# if the index is in between, then both the element before and after it matters
# make sure not to include '0' in the comparison
