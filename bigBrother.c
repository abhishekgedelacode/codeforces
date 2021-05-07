#include <stdio.h>
int main()
{
    int i = 0, a, b;
    scanf("%d%d", &a, &b);
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        i++;
    }
    printf("%d\n", i);
    return 0;
}