# https://codeforces.com/problemset/problem/443/A

s=input()
s=s[1:-1].split(", ")
if s==['']:
    print(0)
else:
    print(len(set(s)))