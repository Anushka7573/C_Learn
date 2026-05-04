#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a ,b:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("Swap no. a is %d",a);
    printf("\nSwap no. b is %d",b);
}