#include <stdio.h>

int main()
{
    int n, t, i, j;
    char ch, q[50];
    scanf("%d%d", &n, &t);
    scanf("%s", q);
    for (i = 1; i < t; i++)
    {
        ch = q[0];
        for (j = 0; j < n - 1; j++)
            q[j] = q[j + 1];
        q[n - 1] = ch;
    }
    for (i = 0; q[i + 1] != '\0'; i++)
    {
        if (q[i] == 'B' && q[i + 1] == 'G')
        {
            q[i] = 'G';
            q[i + 1] = 'B';
            i++;
        }
    }
    printf("%s\n", q);
    return 0;
}