# https://codeforces.com/contest/978/problem/A

n=int(input())
a=[int(x) for x in input().split(' ')]
b=[]
for an in a[::-1]:
	if an not in b:
		b.append(an)
print(len(b))
print(' '.join([str(x) for x in b[::-1]]))