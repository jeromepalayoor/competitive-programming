# https://codeforces.com/contest/1881/problem/A

def s():
	input()
	x=input()
	s=input()
	for i in range(6):
		if s in x:
			print(i)
			return
		x+=x
	print(-1)

for _ in range(int(input())):
	s()