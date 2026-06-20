# https://codeforces.com/problemset/problem/1409/A

for _ in range(int(input())):
    a, b = map(int, input().split())
    diff = abs(a - b)
    if diff % 10 == 0:
        print(diff // 10)
    else:
        print(diff // 10 + 1)