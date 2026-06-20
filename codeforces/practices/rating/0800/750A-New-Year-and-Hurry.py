# https://codeforces.com/problemset/problem/750/A

a = list(map(int, input().split()))
n = a[0]
k = a[1]

time = 240 - k
count = 0
for i in range(1, n + 1):
    time -= i * 5
    if time >= 0:
        count += 1
    else:
        break

print(count)