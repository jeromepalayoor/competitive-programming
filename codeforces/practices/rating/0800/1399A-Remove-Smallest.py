# https://codeforces.com/problemset/problem/1399/A

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    for i in range(1, n):
        if a[i] - a[i-1] > 1:
            print("NO")
            break
    else:
        print("YES")