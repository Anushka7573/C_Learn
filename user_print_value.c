#include<stdio.h>
void main()
{
    int a[5],i;
    //for user input

    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter value for a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    //for print value
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
}