#include<stdio.h>
int fact(int n);
void  main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r=fact(n);
    printf("Factorial of %d is %d",n,r);
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}