#include<stdio.h>
int Sum();
void  main()
{
    int r;
    r=Sum();
    printf("Sum of first 10 natural numbers is %d",r);
}
int Sum()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    return a+b;
}