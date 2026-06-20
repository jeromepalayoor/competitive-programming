# https://codeforces.com/problemset/problem/339/B

a = list(map(int, input().split()))
b = list(map(int, input().split()))

n = a[0]
m = a[1]

total = 0
current = 1

for i in range(m):
    if b[i] >= current:
        total += b[i] - current
    else:
        total += n - current + b[i]
    current = b[i]

print(total)