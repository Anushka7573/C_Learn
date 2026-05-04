#include<stdio.h>
void main()
{
    int age=20;
    int *p=&age;

    int a=5;
    int *k=&a;

    printf("\naddress is :%p",&p);
    printf("\naddress is :%p",&a);
}