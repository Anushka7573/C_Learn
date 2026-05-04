#include<stdio.h>
void main()
{
    float b,h;   //b= breadth , h=height//
    float area;
    printf("Enter the value of b,h:");
    scanf("%f %f",&b,&h);
    area=.5*b*h;
    printf("Area is %.2f",area);
}