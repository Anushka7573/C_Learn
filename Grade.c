#include<stdio.h>
void main()
{
    int Grade;
    printf("Enter the value of Grade:");
    scanf("%d",&Grade);
    switch (Grade)
    {
    case 1:
        printf("Excellent");
        break;
    case 2:
        printf("\n Very Good");
        break;
    case 3:
        printf("Average");
        break;
    case 4:
        printf("Fail");
        break;
    default:printf("Something are wrong");
        break;
    }
}