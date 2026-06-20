# https://codeforces.com/problemset/problem/1512/A

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = sorted(a)
    if b[0] != b[1]:
        print(a.index(b[0]) + 1)
    else:
        print(a.index(b[-1]) + 1)