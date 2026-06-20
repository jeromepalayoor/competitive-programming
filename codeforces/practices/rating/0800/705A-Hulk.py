# https://codeforces.com/problemset/problem/705/A

n=int(input())
a=["I hate ","I love "]
for i in range(n-1):
	print(a[i%2],end='that ')
print(a[(n-1)%2],end='it')