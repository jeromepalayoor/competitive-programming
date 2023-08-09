# https://codeforces.com/contest/78/problem/B

n=int(input())
e=n%7
if e==0:
	print("ROYGBIV"*(n//7))
elif e==1:
	print("ROYGBIV"*(n//7-1)+"ROYGRBIV")
elif e==2:
	print("ROYGBIV"*(n//7-1)+"ROBGYRBIV")
elif e==3:
	print("ROYGBIV"*(n//7-1)+"RYIOBGRYBV")
elif e==4:
	print("RYOGBIV"*(n//7-1)+"RYIOBGYRBOV")
elif e==5:
	print("ROYGBIV"*(n//7-1)+"RYOIBGYRBOVI")
elif e==6:
	print("ROYGBIV"*(n//7-1)+"RYIOBGYRBVOIB")