# https://atcoder.jp/contests/abc309/tasks/abc309_b

n = int(input())
a = [[]]*n

for i in range(n):
    a[i] = list(map(int, list(input())))

x = a[0].pop()

a[0] = [a[1][0]] + a[0]

for i in range(1, n - 1):
    tmp = a[i].pop()
    a[i] = a[i] + [x]
    x = tmp

tmp = a[-1].pop(0)
a[-1] = a[-1] + [x]

for i in range(n - 1, 1, -1):
    x = a[i-1].pop(0)
    a[i-1] = [tmp] + a[i-1]
    tmp = x

for i in range(n):
    print("".join(map(str, a[i])))