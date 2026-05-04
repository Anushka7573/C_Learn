#include<stdio.h>
void main()
{
    int n;
    printf("Enter your age:");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("More than 18");
    }
    else
    {
        printf("Less than 18");
    }
}