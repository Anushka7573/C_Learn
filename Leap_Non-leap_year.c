#include<stdio.h>
void main()
{
    int n;
    printf("Check the no. is leap year or non-leap year:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("No. is leap year");
    }
    else
    {
        printf("No. is non-leap year");
    }
}