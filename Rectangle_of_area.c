#include<stdio.h>
void main()
{
    float l,b;  // l=lenght , b= breadth//
    float area;
    printf("Enter the value of l,b:");
    scanf("%f %f",&l,&b);
    area=l*b;
    printf("Area is %.2f",area);
}