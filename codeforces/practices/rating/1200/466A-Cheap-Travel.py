# https://codeforces.com/problemset/problem/466/A

x = list(map(int, input().split()))
n = x[0]
m = x[1]
a = x[2]
b = x[3]

if m * a <= b:
    print(n * a)
else:
    print((n // m) * b + min((n % m) * a, b))