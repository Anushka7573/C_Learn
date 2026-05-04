#include<stdio.h>
int Sum(int n);
void  main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r=Sum(n);
    printf("Sum of first %d natural numbers is %d",n,r);
}
int Sum(int n)
{
    if(n==0)
        return 1;
    else
        return n+Sum(n-1);
}