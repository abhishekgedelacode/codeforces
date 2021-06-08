#include <stdio.h>

int main()
{
    int n, i, s = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &i);
        s += i;
    }
    if (s > 0)
    {
        printf("HARD");
    }
    else
    {
        printf("EASY");
    }
    return 0;
}