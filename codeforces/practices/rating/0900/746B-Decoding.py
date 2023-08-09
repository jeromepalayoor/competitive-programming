# https://codeforces.com/contest/746/problem/B

n=int(input())
s=input()
e=['0']*n
while n>0:
	if n%2==0:
		e[n//2-1]=s[0]
	else:
		e[[i for i, n in enumerate(e) if n == '0'][(n-1)//2]]=s[0]
	n-=1
	s=s[1:]
print(''.join(e))