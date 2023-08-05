// https://codeforces.com/problemset/problem/59/A

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char s[101];
    scanf("%s", s);
    int u = 0, l = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            u++;
        else
            l++;
    }
    if (u > l)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
    }
    else
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
    }
    printf("%s", s);
    return 0;
}