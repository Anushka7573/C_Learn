#include<string.h>
#include<stdio.h>
void main()
{
    char str1[100],str2[100],str3[200];
    int len;
    printf("Enter the first string:");
    gets(str1);
    printf("Enter the second string:");
    gets(str2);

    if(strcmp(str1,str2)==0)
    {
        printf("Both strings are equal");
    }
    else
    {
        printf("Both strings are not equal");
    }
}