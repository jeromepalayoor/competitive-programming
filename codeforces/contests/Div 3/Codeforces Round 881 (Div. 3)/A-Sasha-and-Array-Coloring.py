# https://codeforces.com/contest/1843/problem/A

T = int(input())
output = []
for _ in range(T):
    n = int(input())
    a = input()
    a = list(map(int, a.split(' ')))
 
    if n == 0 or n == 1:
        output.append(0)
    if n == 3 or n == 2:
        output.append(max(a)-min(a))
    if n>3:
        a.sort()
        s = 0
        for i in range(n//2):
            s += a[-1-i] - a[i]
        output.append(s)
 
for i in output:
    print(i)