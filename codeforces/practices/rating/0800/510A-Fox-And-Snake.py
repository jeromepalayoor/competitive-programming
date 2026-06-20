# https://codeforces.com/problemset/problem/510/A

a = list(map(int, input().split()))
n = a[0]
m = a[1]

for i in range(n):
    if i % 2 == 0:
        print("#" * m)
    elif i % 4 == 1:
        print("." * (m - 1) + "#")
    else:
        print("#" + "." * (m - 1))