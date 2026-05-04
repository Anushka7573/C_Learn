#include<stdio.h>
void main()
{
    int n,a=0,b=1,i,c;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The Fibonacci series up to %d terms is: ", n);
    for(i=0; i<n; i++)
    {
        printf("%d ", a);
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
}