# https://codeforces.com/problemset/problem/581/A

a = list(map(int, input().split()))

x = a[0]
y = a[1]

if x > y:
    print(y, (x - y) // 2)
else:
    print(x, (y - x) // 2)