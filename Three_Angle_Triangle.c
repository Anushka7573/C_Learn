#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for (i = 65; i <= 80; i++)
    {
        for (j = 65; j <= i; j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}