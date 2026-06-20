# https://codeforces.com/problemset/problem/1352/A

t = int(input())
for _ in range(t):
    n = input()
    ans = []
    for i in range(len(n)):
        if n[i] != '0':
            ans.append(n[i] + '0' * (len(n) - i - 1))
    print(len(ans))
    print(' '.join(ans))