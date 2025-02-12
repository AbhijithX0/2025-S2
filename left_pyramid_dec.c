#include <stdio.h>
void main()
{
    int num, i, j;
    printf("Enter a number :");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        for (j = 0; j <= num - i; j++)
        {
            printf("*");
        }
        printf(" ");
        printf("\n");
    }
}

//Github:AbhijithX0