#include <stdio.h>

void main()
{
    int n, i;
    char word[100];
    scanf("%d", &n);
    while (n > 0)
    {
        scanf("%s", word);
        for (i = 0; word[i] != '\0'; i++)
            ;
        if (i > 10)
        {
            printf("%c%d%c\n", word[0], i - 2, word[i - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
        n--;
    }
}