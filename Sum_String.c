#include<stdio.h>
void main()
{
    int a[5][5],i,j,n,sum=0;
    printf("Enter the number of rows:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");
    }
    printf("Sum of the elements in the matrix is: %d",sum);
}