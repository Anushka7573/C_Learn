#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n no.:");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("Hello");
        break;
    case 2:
        printf("My");
        break;
    case 3:
        printf("Dear");
        break;
    default:printf("Something are wrong");
        break;
    }
}