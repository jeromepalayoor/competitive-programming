# https://codeforces.com/problemset/problem/189/A

n, a, b, c = map(int, input().split())
m = 0
for i in range(n+1):
    for j in range(n+1):
        k = (n - a*i - b*j)/c
        if k >= 0 and k == int(k):
            m = max(m, i+j+k)
print(int(m))