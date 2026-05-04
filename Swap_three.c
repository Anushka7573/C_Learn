#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter the value of a,b,c,d:");
    scanf("%d %d %d",&a,&b,&c);
    d=a;
    a=b;
    b=c;
    c=d;
    printf("Swap no. a is %d",a);
    printf("\nSwap no. b is %d",b);
    printf("\nSwap no. c is %d",c);
    printf("\nSwap no. d is %d",d);
}