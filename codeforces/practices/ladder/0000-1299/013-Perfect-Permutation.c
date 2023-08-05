// https://codeforces.com/problemset/problem/233/A

#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    if (n % 2 == 1)
    {
        printf("-1");
        return 0;
    }
    for (i = 1; i <= n; i += 2)
    {
        printf("%d %d ", i + 1, i);
    }
    return 0;
}