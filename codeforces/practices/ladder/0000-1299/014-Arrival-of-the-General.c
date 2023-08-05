// https://codeforces.com/problemset/problem/144/A

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, max, min, maxIndex, minIndex, count = 0;
    int *arr;
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    maxIndex = 0;
    minIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            minIndex = i;
        }
    }

    if (maxIndex > minIndex)
        count = maxIndex + (n - 1 - minIndex) - 1;
    else
        count = maxIndex + (n - 1 - minIndex);

    printf("%d\n", count);

    return 0;
}