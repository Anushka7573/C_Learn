#include<string.h>
#include<stdio.h>
void main()
{
    char name[100];
    printf("Enter a string: ");
    scanf("%s", name);
    int length = strlen(name);
    printf("The total length of the string is: %d\n", length);
}