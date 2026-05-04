#include<string.h>
#include<stdio.h>

void main()
{
    char str1[100],str2[100];
    int len;
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    len = strlen(str1) + strlen(str2);
    printf("The total length of both strings is: %d\n", len);
}