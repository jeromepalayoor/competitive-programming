# https://codeforces.com/problemset/problem/723/A

a = list(map(int, input().split()))
a.sort()
print(a[2] - a[0])