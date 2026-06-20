# https://codeforces.com/problemset/problem/455/A

n = int(input())
a = list(map(int, input().split()))
a.sort()
dp = [0]*(a[-1]+1)
for i in range(n):
    dp[a[i]] += a[i]
for i in range(2, a[-1]+1):
    dp[i] = max(dp[i-1], dp[i-2]+dp[i])
print(dp[-1])