# https://codeforces.com/problemset/problem/279/B

n, t = input().split()
t = int(t)
n = int(n)
nums = input().split()
nums = [int(x) for x in nums]

s, b = 0, 0
i, j = 0, 0
while (i < n) and (j < n):
    while j < n and s + nums[j] <= t:
        s += nums[j]
        j += 1
    b = max(b, j-i)
    if j >= n: break
    s += nums[j]
    j += 1
    while s > t:
        s -= nums[i]
        i += 1
print(b)