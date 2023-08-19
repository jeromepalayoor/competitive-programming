# https://codeforces.com/contest/731/problem/A

w = list(input())
w.insert(0, 'a')
count = 0
for i in range(1, len(w)):
    count += min(abs(ord(w[i]) - ord(w[i-1])), 26 - abs(ord(w[i]) - ord(w[i-1])))
print(count)