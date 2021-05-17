#include <stdio.h>
int main()
{
    int n, p, q, r = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &p, &q);
        if (p <= q - 2)
            r++;
    }
    printf("%d\n", r);
    return 0;
}