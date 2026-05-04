#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap a=%d and b=%d",a,b);
    swap(&a,&b);
}
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("\nAfter swap a=%d and b=%d",*a,*b);
}