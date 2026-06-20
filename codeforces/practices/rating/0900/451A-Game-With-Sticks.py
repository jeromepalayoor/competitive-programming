# https://codeforces.com/problemset/problem/451/A

n,m=map(int,input().split(' '))
print('Malvika' if min(n,m)%2==0 else 'Akshat')