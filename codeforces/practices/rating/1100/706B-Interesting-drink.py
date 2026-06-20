# https://codeforces.com/problemset/problem/706/B

n = int(input())
x = list(map(int, input().split()))
x.sort()
q = int(input())
for _ in range(q):
    m = int(input())
    l, r = 0, n-1
    while l <= r:
        mid = (l+r)//2
        if x[mid] <= m:
            l = mid+1
        else:
            r = mid-1
    print(l)