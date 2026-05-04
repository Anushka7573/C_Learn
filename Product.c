#include<stdio.h>
void main()
{
    int product;
    printf("Enter the value of product case no.:");
    scanf("%d",&product);
    switch (product)
    {
    case 1:
        printf("Pencile");
        break;
    case 2:
        printf("Eraser");
        break;
    case 3:
        printf("Pen");
        break;
    default:printf("Something are wrong");
        break;
    }
}