# https://codeforces.com/problemset/problem/4/C

n = int(input())
d = {}
for i in range(n):
    name = input()
    if name in d:
        d[name] += 1
        print(name + str(d[name]))
    else:
        d[name] = 0
        print("OK")