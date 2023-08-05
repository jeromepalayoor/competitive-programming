// https://codeforces.com/problemset/problem/80/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m = 0;
    scanf("%d %d", &n, &m);
    for(int j = n+1; j < m; j++)
    {
        int prime = 1;
        for(int i = 2; i < sqrt(j) + 1; i++)
        {
            if(j% i == 0)
            {
                prime = 0;
                break;
            }
        }
        if(prime == 1)
        {
            printf("NO");
            return 0;
        }
    }
    int prime = 1;
    for(int i = 2; i < sqrt(m) + 1; i++)
    {
        if(m % i == 0)
        {
            printf("NO");
            return 0;
        }
    }
    if(prime == 1)
    {
        printf("YES");
        return 0;
    }
    return 0;
}