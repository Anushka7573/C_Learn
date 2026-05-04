#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter your value a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("\n");
    if(a>b && a>c)
    {
        printf("maximum no. is a");
    }
    else if(b>c && b>d)
    {
        printf("maximum no. is b");
    }
    else if(c>d)
    {
        printf("maximum no. is c");
    }
    else
    {
        printf("maximum no. is d");
    }
}    