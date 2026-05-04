#include<stdio.h>
void main()
{
    int a[5],i,j,temp;
    //for output

    for ( i = 0; i < 5; i++)
    {
        printf("Enter the value of a[%d]:",i);
        scanf("%d",&a[i]);
    }
    //for sorting
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }    
    //for bubble sorting

    for ( i = 0; i < 5; i++)
    {
    
        for ( j = 0; j < 5; j++)
        {
            if (a[j] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }    
    //for print sorted array
    printf("\n_______\n ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
}