#include <stdio.h>

int main()
{
    int n, i, ans = 0;
    char row[50];
    scanf("%d", &n);
    scanf("%s", row);
    for (i = 0; i < n - 1; i++)
    {
        if (row[i] == row[i + 1])
            ans++;
    }
    printf("%d\n", ans);
    return 0;
}