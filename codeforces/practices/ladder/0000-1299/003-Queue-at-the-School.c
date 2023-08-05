// https://codeforces.com/problemset/problem/266/B

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, t;
    scanf("%d %d", &n, &t);
    char *s = (char *)malloc(sizeof(char) * (n + 1));
    scanf("%s", s);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    printf("%s", s);
    return 0;
}