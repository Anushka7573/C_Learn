#include<stdio.h>
void main()
{
    int i,j,prime=0,num;
    printf("Enter the number:");
    scanf("%d",&num);

    for ( i = 2; i < num; i++)
    {
        prime=0;
        for ( j = 2; j <=i/2; j++)
        {
            if (i%j==0)
        {
            prime++;
            break;
        }
        }
        if(prime==0)
        {
            printf("%d ",i);
        }
    }
}