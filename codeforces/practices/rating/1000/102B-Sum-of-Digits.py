# https://codeforces.com/contest/102/problem/B

n=input()
c=0
if len(n)==1:
	print(0)
	exit()
while 1:
	c+=1
	n=str(n)
	s=0
	for i in range(len(n)):
		s+=int(n[i])
	n=s
	if n<10:
		break
print(c)