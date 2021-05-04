#include <stdio.h>
#include <math.h>

int main()
{
    int i, j, a, b, sol;
    int mat[5][5];

    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 1)
                a = i, b = j;
        }

    sol = abs(2 - a) + abs(2 - b);
    printf("%d\n", sol);
    return 0;
}