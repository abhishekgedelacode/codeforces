#include <stdio.h>
int main()
{
    int n, count = 0, choice, i = 0;
    scanf("%d", &n);
    while (n--)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d", &choice);
            if (choice == 1)
            {
                i++;
            }
        }
        if (i > 1)
            count++;
        i = 0;
    }
    printf("%d\n", count);
    return 0;
}