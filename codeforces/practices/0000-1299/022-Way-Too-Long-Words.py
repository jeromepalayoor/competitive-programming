# https://codeforces.com/problemset/problem/71/A

print("\n".join([x if len(x := input()) <= 10 else x[0] + str(len(x) - 2) + x[-1] for _ in range(int(input()))]))