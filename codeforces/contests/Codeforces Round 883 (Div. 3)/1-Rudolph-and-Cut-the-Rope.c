// https://codeforces.com/contest/1846/problem/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            if (b < a)
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}