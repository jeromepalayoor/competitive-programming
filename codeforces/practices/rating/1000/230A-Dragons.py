# https://codeforces.com/problemset/problem/230/A

a = list(map(int, input().split()))
s = a[0]
n = a[1]
b = []
for i in range(n):
    b.append(list(map(int, input().split())))
b.sort()
for i in range(n):
    if s > b[i][0]:
        s += b[i][1]
    else:
        print("NO")
        exit()
print("YES")