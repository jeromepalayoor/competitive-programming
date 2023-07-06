// https://codeforces.com/problemset/problem/266/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char s[52];
    scanf("%s", s);
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}