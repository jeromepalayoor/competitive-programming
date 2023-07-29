# https://atcoder.jp/contests/abc312/tasks/abc312_b

N,M = list(map(int, list(input().split(" "))))
X = []
for _ in range(N):
	X.append(input())
out = []
for j in range(N-8):
	for i in range(M-8):
		if X[j][i:i+4] == "###." and X[j+1][i:i+4] == "###." and X[j+2][i:i+4] == "###." and X[j+3][i:i+4] == "....":
			if X[j+5][i+5:i+9] == "...." and X[j+6][i+5:i+9] == ".###" and X[j+7][i+5:i+9] == ".###" and X[j+8][i+5:i+9] == ".###":
				out.append([str(j+1),str(i+1)])
print("\n".join([" ".join(o) for o in out]))